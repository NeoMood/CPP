/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:42:38 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/30 19:24:48 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
    Name = "Clap";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Hit_points(10), Energy_points(10), Attack_damage(0) {
    std::cout << "\e[0;33mClapTrap Parameterized Constructor Called\e[0m" << std::endl;
    Name = name;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "ClapTrap " << this->Name << " Have no energy points nor hit points left!" << std::endl;
    else
    {       
        this->Energy_points = this->Energy_points - 1;
        std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points = this->Hit_points - amount; 
    std::cout << "ClapTrap " << Name << " loses " << amount << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "ClapTrap " << this->Name << " Have no energy points nor hit points left!" << std::endl;
    else
    {       
        this->Hit_points = this->Hit_points + amount;
        this->Energy_points = this->Energy_points - 1;
        std::cout << "ClapTrap " << Name << " gets " << amount << " hit points back" << std::endl;
    }
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	(void) assign;
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}