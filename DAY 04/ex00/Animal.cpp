/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:18:05 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/20 20:29:21 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type) {}

std::string Animal::getType() const { return type; }

void Animal::makeSound() const{};

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Animal const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}