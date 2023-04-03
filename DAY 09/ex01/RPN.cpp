/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:43:20 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/30 22:37:40 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructors
RPN::RPN()
{
	std::cout << "\e[0;33mDefault Constructor called of RPN\e[0m" << std::endl;
}

RPN::RPN(const RPN &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of RPN\e[0m" << std::endl;
}


// Destructor
RPN::~RPN()
{
	std::cout << "\e[0;31mDestructor called of RPN\e[0m" << std::endl;
}

int RPN_process(std::string expression)
{
    std::stack<int> mystack;
    std::string tmp_str = "";
    int result;
    for (size_t i = 0; i < expression.size(); ++i) 
    {
        char c = expression[i];
        if (isdigit(c) || (c == '-' && i + 1 < expression.size() && isdigit(expression[i+1]))) 
        {
            tmp_str += c;
            if (i + 1 == expression.size() || !isdigit(expression[i+1])) {
                mystack.push(std::stoi(tmp_str));
                tmp_str = "";
            }
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
                    {
                        if (b == 0) {
                            std::cerr << "\033[31mError: division by zero\033[0m" << std::endl;
                            exit(EXIT_FAILURE);
                        }
                        result = a / b;
                        break;
                    }
                    case '*':
                        result = a * b;
                        break;
                }
                mystack.push(result);
                std::cout << a << " " << c << " " << b << " = " << mystack.top() << std::endl;
            }
            else
            {
                std::cerr << "\e[0;31mError!\e[0m" << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            std::cerr << "\e[0;31mError!\e[0m" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    return mystack.top();
}

// Operators
RPN & RPN::operator=(const RPN &assign)
{
	(void) assign;
	return *this;
}

