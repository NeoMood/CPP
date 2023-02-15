/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:21:28 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/15 19:12:24 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string n, int gr);
        const std::string getname();
		unsigned int getgrade() const;
        void increment_grade();
        void decrement_grade();
        void signForm(AForm &form);
        void executeForm(AForm &form);

		// Destructor
		~Bureaucrat();

		// Operators
        Bureaucrat & operator=(const Bureaucrat &assign);

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
        unsigned int grade;
};

std::ostream& operator<<(std::ostream& myout ,Bureaucrat& bur);

#endif