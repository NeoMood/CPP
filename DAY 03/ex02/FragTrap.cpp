/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:19:45 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 15:35:49 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    Name = "Default";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "FragTrap Parameterized Constructor Called" << std::endl;
    Name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->Name << " High fives guys" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor Called" << std::endl;
}
