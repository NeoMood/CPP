/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:09:52 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/14 18:41:09 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fp(0) {
	std::cout << "Default constructor called " << std::endl;
};

Fixed::Fixed( const Fixed& src )
{
	std::cout << "Copy constructor called " << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Default Destructor called " << std::endl;
}

Fixed &				Fixed::operator=( Fixed const & op )
{
	
	std::cout << "Assignment operator called " << std::endl;
	this->setRawBits(op.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(fp);
}

void Fixed::setRawBits( int const raw ){
	this->fp = raw;
}
