/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:40:08 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/20 23:42:27 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Constructors
Form::Form(std::string const &name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(false), grade_sign(grade_to_sign), grade_execute(grade_to_execute)
{
	std::cout << "\e[0;33mParametrized Constructor called of Form\e[0m" << std::endl;
    if (grade_to_sign > 150)
        throw Form::GradeTooLowException();
    if (grade_to_sign < 1)
        throw Form::GradeTooHighException();
    if (grade_to_execute > 150)
        throw Form::GradeTooLowException();
    if (grade_to_execute < 1)
        throw Form::GradeTooHighException();
}

Form::Form() : name("Default"), is_signed(false), grade_sign(10), grade_execute(20)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy) : name("Default"), is_signed(false), grade_sign(120), grade_execute(150)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}


const std::string Form::getname()
{
	return(this->name);
}

bool Form::getis_signed()
{
	return(this->is_signed);
}

unsigned int Form::getgrade_sign()
{
	return(this->grade_sign);
}

unsigned int Form::getgrade_execute()
{
	return(this->grade_execute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getgrade() <= this->getgrade_sign())
    {
        this->is_signed = true;
    }
    else
        throw GradeTooLowException();
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	if(this != &assign)
    {
        this->is_signed = assign.is_signed;
    }
	return *this;
}

std::ostream &operator<<(std::ostream &myout, Form &form)
{
    myout << form.getname() << " is ";
    if (form.getis_signed())
        myout << "signed. ";
    else
        myout << "not signed. ";
    myout << "Grade to sign: " << form.getgrade_sign() << ". Grade to execute: " << form.getgrade_execute() << ".";
    return myout;
}