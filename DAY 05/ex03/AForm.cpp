/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:40:08 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/21 23:21:23 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors
AForm::AForm(std::string const &name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(false), grade_sign(grade_to_sign), grade_execute(grade_to_execute)
{
	std::cout << "\e[0;33mParametrized Constructor called of AForm\e[0m" << std::endl;
    if (grade_to_sign > 150)
        throw AForm::GradeTooLowException();
    if (grade_to_sign < 1)
        throw AForm::GradeTooHighException();
    if (grade_to_execute > 150)
        throw AForm::GradeTooLowException();
    if (grade_to_execute < 1)
        throw AForm::GradeTooHighException();
}

AForm::AForm() : name("Default"), is_signed(false), grade_sign(10), grade_execute(20)
{
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(const AForm &copy) : name("Default"), is_signed(false), grade_sign(120), grade_execute(150)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
}


const std::string AForm::getname()
{
	return(this->name);
}

bool AForm::getis_signed() const
{
	return(this->is_signed);
}

unsigned int AForm::getgrade_sign()
{
	return(this->grade_sign);
}

unsigned int AForm::getgrade_execute()
{
	return(this->grade_execute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getgrade() <= this->getgrade_sign())
    {
        this->is_signed = true;
    }
    else
        throw GradeTooLowException();
}

// Destructor
AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	if(this != &assign)
    {
        this->is_signed = assign.is_signed;
    }
	return *this;
}

std::ostream &operator<<(std::ostream &myout, AForm &form)
{
    myout << form.getname() << " is ";
    if (form.getis_signed())
        myout << "signed. ";
    else
        myout << "not signed. ";
    myout << "Grade to sign: " << form.getgrade_sign() << ". Grade to execute: " << form.getgrade_execute() << ".";
    return myout;
}