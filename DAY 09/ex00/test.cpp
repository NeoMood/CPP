#include "BitcoinExchange.hpp"

// bool isValidValue(std::string& str)
// {
//     std::string::iterator it = str.begin();
//     std::string::iterator end = str.end();
//     int p = false;
//     if (it != end && (*it == '-' ||*it == '+')) 
//         ++it;
//     for (; it != end; ++it)
//     {
//         if (*it == '.') 
//         {
//            if (p) 
//                return false;
//            else
//                p = true;
//         } 
//         else if (!std::isdigit(*it))
//             return false;
//     }
//     return true;
// }

bool isValidValue(std::string& str)
{
    bool p = false;
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (*it == '.')
        {
            if (p || str.back() == '.')
                return false;
            p = true;
        }
        else if (!std::isdigit(*it))
        {
            return false;
        }
    }
    return !str.empty() && p ? str.front() != '0' && str.back() != '0' && str.find_first_not_of("0123456789.-") == std::string::npos : true;
}

int main()
{
    std::string str = "-3";
    if(isValidValue(str))
        puts("valid");
    return(0);
}
