/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:08:15 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/26 23:52:33 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

// Destructor
ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}

bool isit_float(std::string str)
{
    int i;

    i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			break;
	}
    if (str[i] == '.' && i > 0 && isdigit(str[i - 1]) && isdigit(str[i + 1]))
    {
        while(str[++i])
        {
            if(!isdigit(str[i]))
            {
                if(str[i] == 'f' && str[i + 1] == '\0')
                    return true;
                if(str[i] == '.' && !isdigit(str[i + 1]))
                    return false;
                if(!isdigit(str[i]) && str[i] != '.')
                    return false;
            }
        }
    }
    return false;
}

bool isit_double(std::string str)
{
    int i = -1;
    while(str[++i])
    {
        if(!isdigit(str[i]) && str[i] != '+' && str[i] != '-')
            break;
    }
    if (str[i] == '.' && i > 0 && isdigit(str[i - 1]) && isdigit(str[i + 1]))
    {
        while(str[++i])
        {
            if(!isdigit(str[i]))
                return false;
        }
    }
    else
        return false;
    return true;
}

bool isit_int(std::string str)
{
    int i = 0;
    
    if(str[i] == '-' || str[i] == '+')
        i++;

    // puts("igiougujgjg");
    while(str[i])
    {
        if(!isdigit(str[i]))
            return false;
        i++;
    }

    long long num = stoll(str);

    if (num < INT_MIN || num > INT_MAX)
    {
        std::cout << "This Int exceeds int limits" << std::endl;
        exit (1);
    }
    
    return(true);
}

void convert_char(std::string str)
{
    if(str.length() == 1 && isprint(str[0]))
    {
        std::cout << "- char: " << str[0] << std::endl;
        int i = static_cast<int>(str[0]);
        std::cout << "- int : " << i << std::endl;
        
        float f = static_cast<float>(str[0]);
        if(f == i)
            std::cout << "- float : " << i << ".0" << "f" << std::endl;
        else
            std::cout << "- float : " << f << "f" << std::endl;
        
        double d = static_cast<double>(str[0]);
        if(d == i)
            std::cout << "- double : " << d << ".0" << std::endl;
        else
            std::cout << "- double : " << d << std::endl;
    }
    else
        std::cout << "The argument you passed is not printable" << std::endl;
}


void convert_int(std::string str)
{
    int i = atoi(str.c_str());
    char c = static_cast<char>(i);
    
    if(isprint(c))
        std::cout << "- char: " << c << std::endl;
    else
        std::cout << "- char: Non displayable" << std::endl;
    
    std::cout << "- int: " << i << std::endl;
    
    float f = static_cast<float>(i);
        if(f == i)
            std::cout << "- float : " << i << ".0" << "f" << std::endl;
        else
            std::cout << "- float : " << f << "f" << std::endl;
    
    double d = static_cast<double>(i);
    if(d == i)
        std::cout << "- double : " << d << ".0" << std::endl;
    else
        std::cout << "- double : " << d << std::endl;
}

void convert_double(std::string str)
{
    double d = std::stod(str);
    char c = static_cast<char>(d);
    
    if(isprint(c))
        std::cout << "- char : " << c << std::endl;
    else
        std::cout << "- char : Non displayable" << std::endl;
    
    int i = static_cast<int>(d);
    std::cout << "- int : " << i << std::endl;
    
    float f = static_cast<float>(d);
    if(f == i)
        std::cout << "- float : " << f << ".0" << "f" << std::endl;
    else
        std::cout << "- float : " << f << "f" << std::endl;
    if(d == i)
        std::cout << "- double: " << d << ".0" << std::endl;
    else
        std::cout << "- double: " << d << std::endl;
}

void convert_float(std::string str)
{
    float f = std::stof(str);
    char c = static_cast<char>(f);
    
    if(isprint(c))
        std::cout << "- char : " << c << std::endl;
    else
        std::cout << "- char : Non displayable" << std::endl;
    
    int i = static_cast<int>(f);
    std::cout << "- int : " << i << std::endl;
    
    if(static_cast<float>(f) == i)
        std::cout << "- float : " << f << ".0" << "f" << std::endl;
    else
        std::cout << "- float : " << f << "f" << std::endl;
    
    double d = static_cast<double>(f);
    if(d == i)
       std::cout << "- float : " << d << ".0" << std::endl;
    else
        std::cout << "- double : " << d << std::endl;
}

void ScalarConverter::convert(std::string str)
{   
    if (str == "nan" || str == "+inf" || str == "-inf")
    {
        std::cout << "- char: impossible" << std::endl;
        std::cout << "- int: impossible" << std::endl;
        std::cout << "- float: " << str + "f" << std::endl;
        std::cout << "- double: " << str << std::endl;
        return ; 
    }
    if (str == "nanf" || str == "+inff" || str == "-inff")
    {
        std::cout << "- char: impossible" << std::endl;
        std::cout << "- int: impossible" << std::endl;
        std::cout << "- float: " << str << std::endl;
        std::cout << "- double: " << str.erase(str.size() - 1) << std::endl;
        return ;       
    }
    if (isit_int(str)){
        std::cout << "initial type: int" << std::endl;
        convert_int(str);
    }
    else if(isit_float(str)){
        std::cout << "initial type: float" << std::endl;
        convert_float(str);
    }
    else if(isit_double(str)){
        std::cout << "initial type: double" << std::endl;
        convert_double(str);
    }
    else if (str.length() == 1)
    {
        std::cout << "initial type: char" << std::endl;
        convert_char(str);
    }
}