/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:09:56 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/25 23:44:33 by sgmira           ###   ########.fr       */
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
};

// const int Fixed::fb = 8;

#endif