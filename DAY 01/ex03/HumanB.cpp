/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:14:30 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 18:23:54 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& n) : name(n), weapon(NULL){
}

const std::string& HumanB::getName() const {
    return name;
}

void HumanB::setWeapon(Weapon &Weaponname){
    this->weapon = &Weaponname;
}

void  HumanB::attack()
{
    if(weapon)
        std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
    else{
        std::cout << name << " doesn't have a weapon" << std::endl;
    }
}

HumanB::~HumanB(){}