/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:18:20 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/20 20:02:51 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

// class Animal
// {
// 	public:

// 		Animal();
// 		Animal( Animal const & src );
// 		Animal&	operator=( Animal const & rhs );
// 		std::string& getType();
// 		void makeSound();
// 		~Animal();

// 	protected:
// 		std::string type;

// };

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string &type);
        ~Animal();
		Animal& operator=(const Animal& other);
        virtual void makeSound() const;
        std::string getType() const;
};
// std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */