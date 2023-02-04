/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:14:52 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/04 23:23:10 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat tooHigh("tooHigh", 0);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat bur("Neo", 2);
        std::cout << bur ;
        bur.increment_grade();
        std::cout << bur.getgrade() << std::endl;
        std::cout << bur ;
        bur.increment_grade();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat bur("Neo", 2);
        std::cout << bur ;
        bur.decrement_grade();
        std::cout << bur.getgrade() << std::endl;
        std::cout << bur ;
        bur.increment_grade();
        std::cout << bur ;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

	return 0;
}