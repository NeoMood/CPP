/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:35:10 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/15 18:30:51 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm(Target, 72, 45), target(Target)
{
	std::cout << "\e[0;33mParametrized Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45), target("Default")
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if(this != &assign)
    {
        this->target= assign.target;
    }
	return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const &bur) const
{
    if(bur.getgrade() <= 72 && bur.getgrade() <= 45)
    {
        std::cout << "Vrrrrrr... Vrrrrrr... Vrrrrrr..." << std::endl;
        srand(time(NULL));
        int success = rand() % 2;
        
        if (success == 0) {
            std::cout << target << " has been robotomized successfully!" << std::endl;
        } else {
            std::cout << "Robotomy failed for " << target << "." << std::endl;
        }
    }
    else 
        throw AForm::GradeTooLowException();
}