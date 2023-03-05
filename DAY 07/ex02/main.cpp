/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:36:19 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/03 20:21:53 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
    Array<int> numbers(30);
    int* mirror = new int[30];
    // srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        // const int value = rand();
        numbers[i] = i;
        mirror[i] = i;
    }
    std::cout << "~array values:" << std::endl;
    for (int i = 0; i < 30; i++)
    {
        std::cout << numbers[i] << std::endl;
        std::cout << mirror[i] << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < 30; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[30] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < 30; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}