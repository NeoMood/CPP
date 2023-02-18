/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:30:51 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/16 22:25:29 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;

//     return 0;
// }

int main()
{
    const Animal* j = new Dog();
    
    Dog basic;
    basic.setType("dog1");

    Dog tmp = basic;
    tmp.setType("dog2");

    std::cout << "I'm a " << basic.getType() << " " << std::endl;
    std::cout << "I'm a " << tmp.getType() << " " << std::endl; 
    std::cout << "I'm a " << j->getType() << " " << std::endl; 
}
