#include "ScalarConverter.hpp"

void is_char(std::string str)
{
    if(isalpha(str[0]) && str.length() == 1)
    {
        std::cout << "char : " << str[0] << std::endl;
        int i = static_cast<int>(str[0]);
        std::cout << "int : " << i << std::endl;
        double d = static_cast<double>(str[0]);
        std::cout << "double : " << d << std::endl;
        float f = static_cast<float>(str[0]);
        std::cout << "float : " << f << std::endl;
    }
    else
        std::cout << "INVALID CHAR" << std::endl;
}

bool is_int(std::string str)
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

bool is_float(std::string str)
{
    int i;

	//std::cout << "inside float" << std::endl;
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

bool is_double(std::string str)
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

void int_convert(std::string str)
{
    int num = atoi(str.c_str());
    char c = static_cast<char>(num);
    if(isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << num << std::endl;
    float f = static_cast<float>(num);
    std::cout << "float : " << f << "f" << std::endl;
    double d = static_cast<double>(num);
    std::cout << "double: " << d << std::endl;
}

void double_convert(std::string str)
{
    int i;
    float f;
    double num;
    num = std::stod(str);
    char c = static_cast<char>(num);
    if(isprint(c))
        std::cout << "char : " << c << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
    i = static_cast<int>(num);
    std::cout << "int : " << i << std::endl;
    f = static_cast<float>(num);
    std::cout << "float : " << f << std::endl;
    std::cout << "double: " << num << std::endl;
}

void float_convert(std::string str)
{
    float f = std::stof(str);
    char c = static_cast<char>(f);
    if(isprint(c))
        std::cout << "char : " << c << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
    int i = static_cast<int>(f);
    std::cout << "int : " << i << std::endl;
    std::cout << "float : " << f << std::endl;
    double d = static_cast<double>(f);
    std::cout << "double : " << d << std::endl;
}

void ScalarConverter::convert(std::string str)
{   
    if (str == "nan" || str == "+inf" || str == "-inf")
    {
        std::cout << "char: impossible" <<std::endl;
        std::cout << "int: impossible" <<std::endl;
        std::cout << "float: " << str+"f" << std::endl;
        std::cout << "double: " << str << std::endl;
        return ;
        
    }
    if(is_int(str)){
        // std::cout << "indide is_int" << std::endl;
        int_convert(str);
    }
    else if(is_float(str)){
        // std::cout << "indide is_f" << std::endl;
        float_convert(str);
    }
    else if(is_double(str)){
        // std::cout << "indide is_d" << std::endl;
        double_convert(str);
        
    }
    else
        is_char(str);
}