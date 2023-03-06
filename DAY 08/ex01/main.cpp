/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:13:37 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/05 20:38:56 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp(10);
    
    try{
        std::vector<int> vector;
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
            vector.push_back(rand() % 10000);
        sp.fill_span(vector.begin(), vector.end());
        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
    }
    catch(std::exception &e){
        std::cerr << "Error: Span is full" << std::endl;
    }
    try{
        int shortest = sp.shortestSpan();
        int longest = sp.longestSpan();
        std::cout << "The shortest span is " << shortest << std::endl;
        std::cout << "The longest span is " << longest << std::endl;
    }
    catch(std::exception &e){
        std::cerr << "Error: array have less than 2 elements" << std::endl;
    }
    return 0;
}