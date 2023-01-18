/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:45:15 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 21:00:47 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
}

Dog::Dog( const Dog & src )
{
	type = "Dog";
}

Dog::~Dog()
{
}

Dog&	Dog::operator=( Dog const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Dog const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

void Dog::settype(std::string ty){
	this->type = ty;
};
