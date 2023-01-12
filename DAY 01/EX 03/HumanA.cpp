/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:03:00 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 18:31:08 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(const std::string& n, Weapon& w) : name(n), weapon(w){
}

const std::string& HumanA::getName() const {
    return name;
}

const std::string& HumanA::getWeaponType() const {
    return weapon.getType();
}

void  HumanA::attack()
{
    std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA(){}