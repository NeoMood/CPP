/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:46:43 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 16:23:41 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal 
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(const std::string &type);
		
		// Destructor
		~WrongAnimal();
		
		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);
		void makeSound() const;
		std::string getType() const;
		
		
    protected:
        std::string type;	
};

#endif