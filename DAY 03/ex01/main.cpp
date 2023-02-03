/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:55:54 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/03 17:19:28 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap jack("Jack");
    ClapTrap mike("Mike");
    ScavTrap george("George");
    jack.attack("Mike");
    mike.takeDamage(3);
    george.attack("Mike");
    mike.takeDamage(2);
    mike.attack("Jack");
    jack.takeDamage(3);
    george.guardGate();
    george.takeDamage(5);
    george.beRepaired(5);
    mike.beRepaired(2);
}