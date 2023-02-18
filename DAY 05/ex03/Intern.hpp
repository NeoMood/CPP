/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:37:55 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/18 16:34:16 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
	    Intern &operator=(const Intern &assign);
        AForm*   makeFormPresidentialPardonForm(std::string target);
        AForm*   makeFormRobotomyRequestForm(std::string target);
        AForm*   makeFormShrubberyCreationForm(std::string target);
        AForm*   makeForm(std::string name, std::string target);
        typedef AForm* (Intern::*FORMTYPE)(std::string target);
        ~Intern();
};

// // class Bureaucrat;
// class Intern
// {
//     public:
//         Intern();
//         Intern(std::string Target);
//         Intern(const Intern &copy);
// 	    Intern &operator=(const Intern &assign);
//         AForm* makeForm(std::string name, std::string target);
//         ~Intern();
// };


#endif