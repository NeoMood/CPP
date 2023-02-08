/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:02:14 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/08 18:42:38 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;
class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(std::string const &name, int grade_to_sign, int grade_to_execute);
		const std::string getname();
		bool getis_signed();
		unsigned int getgrade_sign();
		unsigned int getgrade_execute();
		void beSigned(Bureaucrat &bureaucrat);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);



		class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Bureaucrat grade too high";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Bureaucrat grade too low";
                }
        };
		
	private:
		const std::string name;
		bool is_signed;
		const unsigned int grade_sign;
		const unsigned int grade_execute;

};
std::ostream &operator<<(std::ostream &myout, Form &form);

#endif