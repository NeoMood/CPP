/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:09:55 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/07 18:14:31 by sgmira           ###   ########.fr       */
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
	// *this = copy;
	this->brain = new Brain(*copy.brain);
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat() {
    type = "Cat";
	this->brain = new Brain(); 
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }

void Cat::setType(std::string type)
{
    this->type = type;
}

// Destructor
Cat::~Cat()
{
	delete this->brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
    std::cout << "\e[0;33mCopy assignment operator called of Cat\e[0m" << std::endl;
    if (this != &assign)
    {
        if (!this->brain)
            this->brain = new Brain(*assign.brain);
        else
            *(this->brain) = *(assign.brain);
        this->type = assign.type;
    }
    return *this;
}
