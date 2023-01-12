/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:15:10 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 20:22:47 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string wtype){
    type = wtype;
}

const std::string& Weapon::getType() const 
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(){}