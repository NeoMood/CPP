/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:38:13 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 16:45:00 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal(const std::string &type);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		virtual void makeSound() const;
        std::string getType() const;
		
    protected:
        std::string type;
};

#endif