/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:18:05 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 22:13:04 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal( const Animal & src )
{
}

std::string& Animal::getType()
{
    return type;
}

void Animal::makeSound(){};

Animal &				Animal::operator=( Animal const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Animal const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

Animal::~Animal()
{
}