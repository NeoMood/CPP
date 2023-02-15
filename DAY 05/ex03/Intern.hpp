/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:37:55 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/15 23:51:14 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

// class Bureaucrat;
class Intern
{
    public:
        Intern();
        Intern(std::string Target);
        Intern(const Intern &copy);
	    Intern &operator=(const Intern &assign);
        AForm* makeForm(std::string name, std::string target);
        ~Intern();
};


#endif