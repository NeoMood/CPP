/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:45:03 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/21 23:16:42 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int gr) : name(n) , grade(gr)
{
	std::cout << "\e[0;33mParametrized Constructor called of Bureaucrat\e[0m" << std::endl;
    if(this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}


const std::string Bureaucrat::getname()
{
	return(this->name);
}

unsigned int Bureaucrat::getgrade() const 
{
	return(this->grade);
}

void Bureaucrat::increment_grade()
{
	if (this->grade - 1 < 1)
        throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrement_grade()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getname() << " signed " << form.getname() << std::endl;
    }
    catch (const AForm::GradeTooLowException &e)
    {
        std::cout << this->getname() << " couldn't sign " << form.getname() << " because " << e.what() << std::endl;
    }
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if(this != &assign)
    {
        this->grade = assign.grade;
    }
	return *this;
}

std::ostream& operator<<(std::ostream& myout ,Bureaucrat& bur)
{
    myout << "Bureaucrat "<< bur.getname() << ", got grade " << bur.getgrade() << std::endl;
    return myout;
}


void	Bureaucrat::executeForm(AForm &form)
{
    if(form.getis_signed())
    {
        std::cout << this->getname() << " executed " << form.getname() << std::endl;
    }
    else
        std::cout << this->getname() << " cannot executes " << form.getname() << std::endl;
}
