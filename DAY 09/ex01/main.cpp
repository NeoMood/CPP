/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:40:39 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/10 23:58:56 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN rpn;
    if(ac != 2)
    {
        std::cerr << "\033[31mError: Number of arguments is not valid!\033[0m" << std::endl;
        return 1;
    }
    std::string expression = av[1];
    int result = rpn.RPN_process(expression);
    if(rpn.get_mystack().size() == 1)
        std::cout << "\033[1;32mResult: " << result << "\033[0m" << std::endl;
    else
        std::cerr << "\e[0;31mError!\e[0m" << std::endl;
    return 0;
}
