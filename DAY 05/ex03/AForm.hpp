/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:02:14 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/21 23:06:36 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm();
		AForm(const AForm &copy);
		AForm(std::string const &name, int grade_to_sign, int grade_to_execute);
		
		const std::string getname();
		bool getis_signed();
		unsigned int getgrade_sign();
		unsigned int getgrade_execute();
		void beSigned(Bureaucrat &bureaucrat);
		
		// Destructor
		virtual ~AForm();
		
		// Operators
		AForm & operator=(const AForm &assign);
		virtual void    execute(Bureaucrat const &bur) const = 0;
		// virtual void    robotomize(Bureaucrat &bur) const = 0;
		// virtual void    pardon(Bureaucrat &bur) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Bureaucrat grade too high";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Bureaucrat grade too low";
				}
		};
		
	private:
		const std::string name;
		bool is_signed;
		const unsigned int grade_sign;
		const unsigned int grade_execute;

};

std::ostream &operator<<(std::ostream &myout, AForm &form);

#endif