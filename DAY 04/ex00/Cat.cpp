/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:02:20 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 22:02:21 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
}

Cat::Cat( const Cat & src )
{
	type = "Cat";
}

Cat::~Cat()
{
}

Cat &				Cat::operator=( Cat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Cat const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

void Cat::settype(std::string ty){
	this->type = ty;
};
