/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:14:00 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/22 05:22:57 by sgmira           ###   ########.fr       */
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
    // if(is_int(str))
    //     convert_int(str);
    // else if(is_float(str))
    //     convert_float(str);
    // else if(is_double(str))
    //     convert_double(str);
    // else if(str.length() == 1)
    //     convert_char(str);
    // else
    //     its_pseudo(str);
    return 0;
}