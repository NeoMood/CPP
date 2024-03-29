/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:48:53 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/20 18:55:04 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Form f("Form 1", 20, 10);
        Bureaucrat b("Bob", 11);

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
