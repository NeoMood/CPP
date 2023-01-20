/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:02:20 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/20 20:30:20 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat Constructor Called" << std::endl;
}
void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }

Cat::~Cat(){
	std::cout << "Cat Destructor Called" << std::endl;
}