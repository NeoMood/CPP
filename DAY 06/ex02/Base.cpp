/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:52:37 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/27 20:34:28 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Destructor
Base::~Base()
{
    // std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}

Base * generate(void)
{
    srand(time(NULL));
    int choice = rand() % 3;
    
    switch (choice) {
    case 0:
      return new A();
    case 1:
      return new B();
    case 2:
      return new C();
    }
    return nullptr;
}

void identify(Base* p) 
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "has type A\n";
    } 
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "has type B\n";
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "has type C\n";
    }
}

void identify(Base& p) 
{
    try 
    {
        static_cast<void>(dynamic_cast<A&>(p));
        std::cout << "has type A\n";
    }
    catch (std::bad_cast&) 
    {
        try {
            static_cast<void>(dynamic_cast<B&>(p));
            std::cout << "has type B\n";
        } 
        catch (std::bad_cast&) 
        {
            try
            {
                static_cast<void>(dynamic_cast<C&>(p));
                std::cout << "has type C\n";
            } 
            catch (std::bad_cast&)
            {
                std::cout << "Unknown type\n";
            }
        }
    }
}
