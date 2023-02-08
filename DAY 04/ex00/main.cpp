/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:30:51 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/07 16:49:45 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* k = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();

    
    std::cout << "I'm a " << j->getType() << " " << std::endl;
    std::cout << "I'm a " << i->getType() << " " << std::endl;
    std::cout << "I'm a " << w->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    k->makeSound();
    w->makeSound();

    delete k;
    delete j;
    delete i;
    delete w;
    return 0;
}