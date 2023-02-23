/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:08:15 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/23 17:57:39 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

// ScalarConverter::ScalarConverter(const ScalarConverter &copy)
// {
// 	(void) copy;
// 	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m" << std::endl;
// }


// Destructor
ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}


// // Operators
// ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
// {
// 	(void) assign;
// 	return *this;
// }

// bool isit_int(std::string str)
// {
//     int j = 0;
//     while(str[j])
//     {
//         if(!isdigit(str[j]) && str[j] != '-' && str[j] != '+')
//             return(false);
//         j++;
//     }
//     return(true);
// }

bool isit_float(std::string str)
{
    int i;

    i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			break;
	}
    if (str[i] == '.')
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
    else if(str[i] == 'f')
        return true;
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
    if (str[i] == '.')
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

void convert_char(std::string str)
{
    if(str.length() == 1 && isprint(str[0]))
    {
        std::cout << "- char: " << str[0] << std::endl;
        // int i = static_cast<int>(str[0]);
        // std::cout << "- int: " << i << std::endl;
        // double d = static_cast<double>(str[0]);
        // std::cout << "- double: " << d << std::endl;
        // float f = static_cast<float>(str[0]);
        // std::cout << "- float: " << f << std::endl;
        int i = static_cast<int>(str[0]);
        std::cout << "- int : " << i << std::endl;
        if(static_cast<float>(str[0]) == i)
            std::cout << "- float : " << str[0] << ".0" << "f" << std::endl;
        else
            std::cout << "- float : " << str[0] << "f" << std::endl;
        double d = static_cast<double>(str[0]);
        if(d == i)
        std::cout << "- float : " << d << ".0" << std::endl;
        else
            std::cout << "- double : " << d << std::endl;
    }
    else
        std::cout << "The argument you passed is not printable" << std::endl;
}

bool isit_int(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(!isdigit(str[i]) && str[i] != '+' && str[i] != '-')
            return(false);
        i++;
    }
    return(true);
}

void convert_int(std::string str)
{
    int num = atoi(str.c_str());
    char c = static_cast<char>(num);
    if(isprint(c))
        std::cout << "- char: " << c << std::endl;
    else
        std::cout << "- char: Non displayable" << std::endl;
    std::cout << "- int: " << num << std::endl;
    float f = static_cast<float>(num);
    std::cout << "- float : " << f << "f" << std::endl;
    double d = static_cast<double>(num);
    std::cout << "- double: " << d << std::endl;
}

void convert_double(std::string str)
{
    int i;
    float f;
    double num;
    num = std::stod(str);
    char c = static_cast<char>(num);
    if(isprint(c))
        std::cout << "- char : " << c << std::endl;
    else
        std::cout << "- char : Non displayable" << std::endl;
    i = static_cast<int>(num);
    std::cout << "- int : " << i << std::endl;
    f = static_cast<float>(num);
    if(f == i)
        std::cout << "- float : " << f << ".0" << "f" << std::endl;
    else
        std::cout << "- float : " << f << "f" << std::endl;
    if(num == i)
        std::cout << "- double: " << num << ".0" << std::endl;
    else
        std::cout << "- double: " << num << std::endl;
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
    if(isit_int(str)){
        puts("int");
        convert_int(str);
    }
    else if(isit_float(str)){
        puts("float");
        convert_float(str);
    }
    else if(isit_double(str)){
        puts("double");
        convert_double(str);
    }
    else
    {
        puts("char");
        convert_char(str);
    }
}