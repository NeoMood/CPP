/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:16:29 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/03 17:25:20 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
    Name = "Default";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "\e[0;33mParametrized Constructor called of ScavTrap\e[0m" << std::endl;
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "ScavTrap " << this->Name << " Have no energy points nor hit points left!" << std::endl;
    else
    {       
        this->Energy_points = this->Energy_points - 1;
        std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	(void) assign;
	return *this;
}