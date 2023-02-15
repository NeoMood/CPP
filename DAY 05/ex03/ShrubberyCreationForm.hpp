/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:43:29 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/15 19:01:46 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef SHRUBBERYCREATIONFORM_HPP
// # define SHRUBBERYCREATIONFORM_HPP

// # include "Bureaucrat.hpp"
// # include <iostream>
// # include <string>

// class Bureaucrat;
// class ShrubberyCreationForm
// {
// 	public:
// 		// Constructors
// 		ShrubberyCreationForm();
// 		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
// 		ShrubberyCreationForm(std::string const &name, int grade_to_sign, int grade_to_execute);
// 		const std::string getname();
// 		bool getis_signed();
// 		unsigned int getgrade_sign();
// 		unsigned int getgrade_execute();
// 		void beSigned(Bureaucrat &bureaucrat);
		
// 		// Destructor
// 		~ShrubberyCreationForm();
		
// 		// Operators
// 		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);



// 		class GradeTooHighException : public std::exception {
//             public:
//                 const char* what() const throw() {
//                     return "Bureaucrat grade too high";
//                 }
//         };

//         class GradeTooLowException : public std::exception {
//             public:
//                 const char* what() const throw() {
//                     return "Bureaucrat grade too low";
//                 }
//         };
		
// 	private:
// 		const std::string name;
// 		bool is_signed;
// 		const unsigned int grade_sign;
// 		const unsigned int grade_execute;

// };
// std::ostream &operator<<(std::ostream &myout, ShrubberyCreationForm &form);

// #endif


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string Target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
        void  execute(Bureaucrat const &bur) const;
        ~ShrubberyCreationForm();
};

#endif