/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:45:45 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/21 21:01:10 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm(Target, 147, 137), target(Target)
{
	std::cout << "\e[0;33mParametrized Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 147, 137), target("Default")
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if(this != &assign)
    {
        this->target= assign.target;
    }
	return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &bur) const
{
    std::ofstream outfile;
    if(this->getis_signed() && bur.getgrade() <= 145 && bur.getgrade() <= 137)
    {
        outfile.open(this->target + "_shrubbery");
        outfile <<      "    oxoxoo    ooxoo"          << std::endl;
        outfile <<      "  ooxoxo oo  oxoxooo"          << std::endl;
        outfile <<      " oooo xxoxoo ooo ooox"          << std::endl;
        outfile <<      " oxo o oxoxo  xoxxoxo"          << std::endl;
        outfile <<      "  oxo xooxoooo o ooo"          << std::endl;
        outfile <<      "    ooo\\oo\\  /o/o"          << std::endl;
        outfile <<      "        \\  \\/ /"          << std::endl;
        outfile <<      "         |   /"          << std::endl;
        outfile <<      "         | S|"          << std::endl;
        outfile <<      "         | A|"          << std::endl;
        outfile <<      "         | A|"          << std::endl;
        outfile <<      "         | D|"          << std::endl;
        outfile <<      "  ______/____\\____"          << std::endl;
    }
    else 
        throw AForm::GradeTooLowException();
}