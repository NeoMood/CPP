/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:09:55 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 17:36:52 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Constructors
// Cat::Cat()
// {
// 	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
// }

Cat::Cat(const Cat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat() : Animal("Cat") {
	brain = new Brain(); 
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }

// Destructor
Cat::~Cat()
{
	delete brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	(void) assign;
	return *this;
}
