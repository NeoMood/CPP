/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:37:58 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/15 23:52:26 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern(std::string Target), target(Target)
{
	std::cout << "\e[0;33mParametrized Constructor called of Intern\e[0m" << std::endl;
}


Intern::Intern(), target("Default")
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


AForm* Intern::makeForm(string name, string target) {
    Intern intern;
    AForm* form = intern.makeForm(name, target);
    if (form == nullptr) {
        cout << "Error: Form " << name << " does not exist." << endl;
    }
    return form;
}

// Operators
Intern & Intern::operator=(const Intern &assign)
{
	if(this != &assign)
    {
        this->target= assign.target;
    }
	return *this;
}
