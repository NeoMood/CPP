/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:45:18 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 20:57:44 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Dog : public Animal
{

	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog& operator=( Dog const & rhs );
		void settype(std::string ty){};
	private:

};

#endif