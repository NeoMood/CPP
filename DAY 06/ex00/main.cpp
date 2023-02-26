/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:14:00 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/26 20:14:31 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    std::string str;
    if(ac != 2){
        std::cout << "ERROR: INVALID ARGS" << std::endl;
        return 0;
    }
    str = av[1];
    ScalarConverter::convert(str);
    return 0;
}