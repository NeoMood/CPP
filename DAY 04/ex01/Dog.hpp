/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:58:49 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 17:47:34 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog  : public Animal 
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		void makeSound() const;
		// Destructor
		~Dog();
		
		// Operators
		Dog & operator=(const Dog &assign);
		
	private:
		Brain* brain;
};

#endif