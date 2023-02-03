/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:19:45 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/03 17:47:18 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
    Name = "Default";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}


FragTrap::FragTrap(std::string name) {
    std::cout << "\e[0;33mParametrized Constructor called of FragTrap\e[0m" << std::endl;
    Name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->Name << " High fives guys" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	(void) assign;
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}
