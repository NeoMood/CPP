/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:48:53 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/08 20:08:02 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat b("Bob", 1);
        Form f("Form 1", 150, 150);

        std::cout << b << std::endl;
        std::cout << f << std::endl;

        b.signForm(f);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}


// int main(void)
// {
//     try{
//         Form lol("lol", 20, 10);
//         Bureaucrat bob("bob", 18);
// 		lol.beSigned(bob);
//         puts("here");
// 		bob.signForm(lol);
// 		std::cout << lol;
//         std::cout << bob;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return 0;
// }