/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:15:17 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/14 18:12:04 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Constructors
Dog::Dog() {
    type = "Dog";
	brain = new Brain(); 
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	// *this = copy;
	this->brain = new Brain(*copy.brain);
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

void Dog::setType(std::string type)
{
    this->type = type;
}


void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }

// Destructor
Dog::~Dog()
{
	delete brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
    std::cout << "\e[0;33mCopy assignment operator called of Dog\e[0m" << std::endl;
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
