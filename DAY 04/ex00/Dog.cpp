/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:45:15 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/20 20:32:27 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Constructor Called" << std::endl;
}
void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }
Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
}