/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:30:30 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/20 17:51:27 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class Bureaucrat;
class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
	    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
        void  execute(Bureaucrat const &bur) const;
        ~PresidentialPardonForm();
};


#endif