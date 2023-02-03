/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:57:21 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/26 20:45:23 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if(ac == 2)
    {
        harl.complain(av[1]);
        return(0);
    }
    std::cout << "invalid Arguments" << std::endl;
    return (0);
}

