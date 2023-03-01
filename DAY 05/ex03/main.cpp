/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:31:28 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/21 23:42:11 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
	{
		Bureaucrat				bob("Bob", 1);
		Bureaucrat				bill("Bill", 142);
		Intern someRandomIntern;
		AForm * frm;
		frm = someRandomIntern.makeForm("PresidentialPardon", "Henry");

		frm->beSigned(bob);
		frm->execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
    {
        AForm *form = new ShrubberyCreationForm("SHRUBBERY");
        Bureaucrat bureaucrat("saad", 40);
        form->beSigned(bureaucrat);
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        form->execute(bureaucrat);
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	std::cout << std::endl;
    
    try
    {
        AForm *form1 = new RobotomyRequestForm("bot");
        Bureaucrat bureaucrat1("saad", 45);
        form1->beSigned(bureaucrat1);
        bureaucrat1.signForm(*form1);
        bureaucrat1.executeForm(*form1);
        form1->execute(bureaucrat1);
        delete form1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	std::cout << std::endl;
    
    try
    {
        AForm *form2 = new PresidentialPardonForm("oxox");
        Bureaucrat bureaucrat2("sgmira", 5);
        form2->beSigned(bureaucrat2);
        bureaucrat2.signForm(*form2);
        bureaucrat2.executeForm(*form2);
        form2->execute(bureaucrat2);
        delete form2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}
