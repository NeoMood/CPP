/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:30:23 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/21 23:06:03 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm(Target, 25, 5), target(Target)
{
	std::cout << "\e[0;33mParametrized Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5), target("Default")
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if(this != &assign)
    {
        this->target= assign.target;
    }
	return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const &bur) const
{
    if(this->getis_signed() && (bur.getgrade() <= 25 && bur.getgrade() <= 5))
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else 
        throw AForm::GradeTooLowException();
}