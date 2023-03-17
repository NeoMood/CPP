/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:40:39 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/17 18:27:15 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "\033[31mError: Number of arguments is not valid!\033[0m" << std::endl;
        return 1;
    }
    std::string expression = av[1];
    std::stack<int> mystack;
    std::string tmp_str = "";
    int result;
    for (size_t i = 0; i < expression.size(); ++i) 
    {
        char c = expression[i];
        if (isdigit(c)) 
        {
            tmp_str += c;
            mystack.push(std::stoi(tmp_str));
            tmp_str = "";
        }
        else if (c == ' ')
            continue;
        else if(c == '+' || c == '-' || c == '/' || c == '*')
        {
            if(mystack.size() >= 2)
            {
                int b = mystack.top();
                mystack.pop();
                int a = mystack.top();
                mystack.pop();
                switch (c)
                {
                    case '+':
                        result = a + b;
                        break;
                    case '-':
                        result = a - b;
                        break;
                    case '/':
                        result = a / b;
                        break;
                    case '*':
                        result = a * b;
                        break;
                }
                mystack.push(result);
                std::cout << a << c << b << " = " << mystack.top() << std::endl;
            }
            else
            {
                std::cerr << "\e[0;31mError!\e[0m" << std::endl;
                return 0;
            }
        }
        else
        {
            std::cerr << "\e[0;31mError!\e[0m" << std::endl;
            return 0;
        }
    }
    std::cout << "\033[1;32mResult: " << result << "\033[0m" << std::endl;
}