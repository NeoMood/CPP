/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:35:27 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/15 19:01:39 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class Bureaucrat;
class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
	    RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
        void  execute(Bureaucrat const &bur) const;
        ~RobotomyRequestForm();
};


#endif