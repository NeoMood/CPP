/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:09:56 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/16 17:44:34 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int fp;
		static const int fb = 8;
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed &	operator=( Fixed const & op );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fp);
		bool operator>(const Fixed& op) const;
		bool operator<(const Fixed& op) const;
		bool operator>=(const Fixed& op) const;
		bool operator<=(const Fixed& op) const;
		bool operator==(const Fixed& op) const;
		bool operator!=(const Fixed& op) const;
		Fixed operator+(const Fixed& op) const;
		Fixed operator-(const Fixed& op) const;
		Fixed operator*(const Fixed& op) const;
		Fixed operator/(const Fixed& op) const;
		Fixed& operator++(); //pre
		Fixed operator++(int); //post
		Fixed& operator--(); //pre
		Fixed operator--(int); //post
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};



// const int Fixed::fb = 8;

#endif