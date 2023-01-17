/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:55:54 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/17 17:37:32 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap jack("Jack");
    ClapTrap mike("Mike");
    jack.attack("Mike");
    mike.takeDamage(3);
    mike.attack("Jack");
    jack.takeDamage(3);
    mike.beRepaired(2);
}