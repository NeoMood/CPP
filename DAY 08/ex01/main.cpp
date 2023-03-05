/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:13:37 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/03 03:15:51 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // Span sp = Span(10000);
    try{
        Span sp;

        sp.fill_span(10000);
        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        
        // srand(time(NULL));
        // for (int i = 0; i < 10000; i++) {
        //     int num = rand() % 1000;
        //     sp.addNumber(num);
        // }
    }
    catch(std::exception &e){
        std::cerr << "Error: array is full" << std::endl;
    }
    try{
        std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
        std::cout << "The longest span is " << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cerr << "Error: array have less than 2 elements" << std::endl;
    }
    return 0;
}