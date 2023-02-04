/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:12 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 16:12:51 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);
        void makeSound() const;
		
		// Destructor
		~WrongCat();
		
		// Operators
		WrongCat & operator=(const WrongCat &assign);
		
	private:
		
};

#endif