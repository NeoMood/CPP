/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:30:51 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/16 22:22:49 by sgmira           ###   ########.fr       */
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

// int main()
// {
//     Dog basic;
//     basic.setType("dog1");

//     Dog tmp = basic;
//     tmp.setType("dog2");

//     std::cout << "I'm a " << basic.getType() << " " << std::endl;
//     std::cout << "I'm a " << tmp.getType() << " " << std::endl; 
// }

int main()
{
    const int n = 100;
    Animal** animals = new Animal*[n];
    for (int i = 0; i < n / 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = n / 2; i < n; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << animals[i]->getType() << " " << std::endl;
        animals[i]->makeSound();
    }

    for (int i = 0; i < n; i++)
    {
        delete animals[i];
    }

    delete[] animals;

    return 0;
}
