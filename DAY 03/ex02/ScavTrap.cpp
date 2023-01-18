/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:16:29 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 15:35:57 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    Name = "Default";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap Parameterized Constructor Called" << std::endl;
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor Called" << std::endl;
}