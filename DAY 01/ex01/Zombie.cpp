/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:31:22 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/11 14:19:54 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{  
         
}
void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce() {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::~Zombie()
{
   std::cout << "Zombie " << name << " is destroyed" << std::endl; 
}
