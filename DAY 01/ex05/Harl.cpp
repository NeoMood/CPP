/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:47:49 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/26 20:43:52 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){};

void Harl::debug( void ) {
    std::cout << "This is the debug message." << std::endl;
}

void Harl::info( void ) {
    std::cout << "This is the info message." << std::endl;
}

void Harl::warning( void ) {
    std::cout << "This is the warning message." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is the error message." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string commands[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void (Harl::*Action)();
    Action actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 3; i >= 0; i--)
    {
        if(commands[i] == level)
        {
            (this->*(actions[i]))();
            break;
        }
    }
}

Harl::~Harl(){};