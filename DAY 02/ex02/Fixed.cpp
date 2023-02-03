/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:09:52 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/30 17:58:37 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fp(0) {
	// std::cout << "Default constructor called " << std::endl;
};

Fixed::Fixed( const Fixed& src )
{
	// std::cout << "Copy constructor called " << std::endl;
	*this = src;
}

Fixed::Fixed(const int n) {
	// std::cout << "Int constructor called" << std::endl;
    fp = n << fb;
}

Fixed::Fixed(const float f) {
    fp = roundf(f * (1 << fb));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called " << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & op )
{	
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(op.getRawBits());
	return *this;
}

Fixed Fixed::operator+(const Fixed& op) const {
    // return Fixed((this->fp + op.fp) >> fb);
    return Fixed((this->toFloat() + op.toFloat()));
}

Fixed Fixed::operator-(const Fixed& op) const {
    // return Fixed((this->fp - op.fp) >> fb);
    return Fixed((this->toFloat() - op.toFloat()));
}

Fixed Fixed::operator*(const Fixed& op) const {
    // return Fixed((this->fp * op.fp) >> fb);
    return Fixed((this->toFloat() * op.toFloat()));
}

Fixed Fixed::operator/(const Fixed& op) const {
    // return Fixed((this->fp / op.fp) >> fb);
    return Fixed((this->toFloat() / op.toFloat()));
}

bool Fixed::operator>(const Fixed& op) const {
    return (this->fp > op.fp);
}

bool Fixed::operator<(const Fixed& op) const {
    return (this->fp < op.fp);
}

bool Fixed::operator>=(const Fixed& op) const {
    return (this->fp >= op.fp);
}

bool Fixed::operator<=(const Fixed& op) const {
    return (this->fp <= op.fp);
}

bool Fixed::operator==(const Fixed& op) const {
    return (this->fp == op.fp);
}

bool Fixed::operator!=(const Fixed& op) const {
    return (this->fp != op.fp);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}

Fixed& Fixed::operator++()
{
	this->fp += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->fp += 1;
    return temp;
}

Fixed& Fixed::operator--()
{
	this->fp -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->fp -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a.fp < b.fp ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a.fp < b.fp ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a.fp > b.fp ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a.fp > b.fp ? a : b);
}


int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return(fp);
}

void Fixed::setRawBits( int const raw ){
	this->fp = raw;
}

float Fixed::toFloat() const {
    // std::cout << fp << "~~~~" << std::endl;
    // return (float)fp / pow(2, fb);
    return (float)fp / (1 << fb);
}

int Fixed::toInt() const {
    return fp >> fb;
    // return fp / roundf(pow(2, -fb));
}
