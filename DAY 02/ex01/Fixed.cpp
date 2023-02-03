/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:09:52 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/28 20:56:40 by sgmira           ###   ########.fr       */
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

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
    fp = n << fb;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
    fp = f * (1 << fb);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & op )
{	
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(op.getRawBits());
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return(fp);
}

void Fixed::setRawBits( int const raw ){
	this->fp = raw;
}

float Fixed::toFloat() const {
    return (float)fp / (1 << fb);
}

int Fixed::toInt() const {
    return fp >> fb;
}
