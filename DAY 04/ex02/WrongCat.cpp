/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:07 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 16:14:05 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal("Cat") 
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}

void WrongCat::makeSound() const { std::cout << "Meow!!" << std::endl; }

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	(void) assign;
	return *this;
}

