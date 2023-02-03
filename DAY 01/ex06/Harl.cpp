/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:47:49 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/26 20:46:53 by sgmira           ###   ########.fr       */
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

void    Harl::complain(std::string level)
{
    int i = 0;
    std::string commands[4] = {"DEBUG","INFO","WARNING","ERROR"};
    typedef void (Harl::*Action)();
    Action actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(i = 0; i < 4; i++)
        if (level.compare(commands[i]) == 0)
            break ;
    switch(i)
    {
        case 0:
            (this->*(actions[i]))();
            (this->*(actions[i+1]))();
            (this->*(actions[i+2]))();
            (this->*(actions[i+3]))();
            break ;
        case 1:
            (this->*(actions[i]))();
            (this->*(actions[i+1]))();
            (this->*(actions[i+2]))();
            break ;
        case 2:
            (this->*(actions[i]))();
            (this->*(actions[i+1]))();
            break ;
        case 3:
            (this->*(actions[i]))();
            break ;
        default :
            std::cout << "Invalid action name" << std::endl;
    }
}

Harl::~Harl(){};