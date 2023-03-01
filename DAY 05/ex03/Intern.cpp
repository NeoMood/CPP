/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:37:58 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/20 18:16:30 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors

Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}


Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

AForm* Intern::makeFormShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeFormRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makeFormPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

// AForm* Intern::makeForm(string name, string target) {
//     Intern intern;
//     AForm* form = intern.makeForm(name, target);
//     if (form == nullptr) {
//         cout << "Error: Form " << name << " does not exist." << endl;
//     }
//     return form;
// }

AForm*    Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string names[3] = {"PresidentialPardon","RobotomyRequest","ShrubberyCreation"};
    FORMTYPE Intern[3] = {
        &Intern::makeFormPresidentialPardonForm,
        &Intern::makeFormRobotomyRequestForm,
        &Intern::makeFormShrubberyCreationForm,
    };
    for(i = 0; i < 3; i++)
        if (name.compare(names[i]) == 0)
            break ;
    switch(i)
    {
        case 0:
            return (this->*(Intern[i]))(target);
        case 1:
            return (this->*(Intern[i]))(target);
        case 2:
            return (this->*(Intern[i]))(target);
        default :
            std::cout << "Sorry, the form that you requested doesn't exist." << std::endl;
    }
    throw AForm::GradeTooLowException();
    return 0;
}

// Operators
Intern & Intern::operator=(const Intern &assign)
{
    (void) assign;
	return *this;
}

// Destructor

Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}