/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:35:06 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/04 17:54:03 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

int toInt(std::string number, int& result) {
    std::stringstream ss(number);
    ss >> result;
    return result;
}

bool isValidValue(std::string& str)
{
    std::string::iterator it = str.begin();
    std::string::iterator end = str.end();
    int p = false;
    if (it != end && (*it == '-' ||*it == '+')) 
        ++it;
    for (; it != end; ++it)
    {
        if (*it == '.') 
        {
           if (p) 
               return false;
           else
               p = true;
        } 
        else if (!std::isdigit(*it))
            return false;
    }
    return true;
}

// bool isValidValue(std::string str) {
//     std::istringstream iss(str);

//     int nb;
//     if (iss >> nb && iss.eof()) {
//         return nb >= 0 && nb <= 1000;
//     }
//     // std::cout << nb << "--" << std::endl;
//     iss.clear();

//     float fnb;
//     if (iss >> fnb && iss.eof()) {
//         return fnb >= 0.0f && fnb <= 1000.0f;
//     }
//     // std::cout << fnb << "--" << std::endl;
//     return false;
// }
// bool isValidValue(std::string str) {
    
//     std::istringstream iss(str);

//     int nb;
//     if (iss >> nb) {
//         // std::cout << nb << "--" << std::endl;
//         if (iss.eof()) {
//             return nb >= 0 && nb <= 1000;
//         } else {
//             // There are remaining characters in the stream, so the input string is not a valid numeric value
//             return false;
//         }
//     }
//     iss.clear();

//     float fnb;
//     if (iss >> fnb) {
//         // std::cout << fnb << "++" << std::endl;
//         if (iss.eof()) {
//             return fnb >= 0.0f && fnb <= 1000.0f;
//         } else {
//             // There are remaining characters in the stream, so the input string is not a valid numeric value
//             return false;
//         }
//     }

//     return false;
// }

bool isitdigit(std::string str) {
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) {
            return false;
        }
    }
    return true;
}

bool is_valid_number(std::string& str) {
    std::stringstream ss(str);
    double number;
    ss >> number;
    return !ss.fail();
}

double btc_calc(std::map<std::string, std::string> datamap,  std::string key,  std::string value)
{
    std::map<std::string, std::string>::iterator it;
    float btcvalue;
    std::string key_date = key.substr(0, key.length());
    if(datamap.find(key_date) == datamap.end())
    {
        it = datamap.upper_bound(key_date);
        if(it != datamap.begin())
            it--;
        btcvalue = strtod(it->second.c_str(), NULL);
    }
    else
        btcvalue =  strtod(datamap[key_date].c_str(), NULL);
    double result = strtod(value.c_str(), NULL) * btcvalue;
    std::cout << value << " = " << strtod(value.c_str(), NULL) << " * " << btcvalue << " = ";
    return result;     
}

std::string removeSp(std::string str) {
    std::string result = "";
    for (unsigned int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }
    return result;
}

bool isValidDate(const std::string& year, const std::string& month, const std::string& day) {
    int res;
    try {
        int year_val = toInt(year, res);
        if (year_val < 0 || year_val > 9999) {
            return false;
        }
    } catch (...) {
        return false;
    }

    try {
        int month_val = toInt(month, res);
        if (month_val < 1 || month_val > 12) {
            return false;
        }
    } catch (...) {
        return false;
    }

    try {
        int day_val = toInt(day, res);
        if (day_val < 1 || day_val > 31) {
            return false;
        }

        switch (toInt(month, res)) {
            case 2:
                if ((toInt(year, res) % 4 == 0 && toInt(year, res) % 100 != 0) || toInt(year, res) % 400 == 0) {
                    if (day_val > 29) {
                        return false;
                    }
                } else {
                    if (day_val > 28) {
                        return false;
                    }
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (day_val > 30) {
                    return false;
                }
                break;
            default:
                break;
        }
    } catch (...) {
        return false;
    }
    return true;
}


int main(int ac, char **av)
{
    size_t delimiter_pos;
    if(ac != 2)
    {
        std::cerr << "\033[31mError: Number of arguments is not valid!\033[0m" << std::endl;
        return 1;
    }
    
    std::ifstream database("data.csv");
    if (!database.is_open())
    {
        std::cerr << "\033[31mError: Failed to open database file\033[0m" << std::endl;
        return 1;
    }
    
    std::map<std::string, std::string> datamap;
    std::string line;
    while (std::getline(database, line)) 
    {
        delimiter_pos = line.find(",");
        if (delimiter_pos == std::string::npos) {
            std::cerr << "\033[31mError: Invalid line format: " << line << "\033[0m" << std::endl;
            return 1;
        }
        std::string key = line.substr(0, delimiter_pos);
        std::string value = line.substr(delimiter_pos+1);
        datamap[key] = value;
    }
    database.close();
    std::ifstream userdata(av[1]);
    if (!userdata.is_open())
    { 
        std::cerr << "\033[31mError: Failed to open userdata file\033[0m" << std::endl;
        return 1;
    }

    std::string line2;
    std::getline(userdata, line2);
    if (line2 != "date | value") {
        std::cerr << "Error: first line should be 'date | value'" << std::endl;
        return 1;
    }
    while(std::getline(userdata, line2))
    {
        delimiter_pos = line2.find("|");
        std::string key = line2.substr(0, delimiter_pos);
        std::string value;
        if(line2.find("|") == std::string::npos)
            value = "";
        else
            value = line2.substr(delimiter_pos+1);
        value = removeSp(value);
        if(!isValidValue(value) || strtod(value.c_str(), NULL) > 1000 || strtod(value.c_str(), NULL) < 0)
        {
            std::cerr << "\033[31mError: Value is not valid\033[0m" << std::endl;
            continue;
        }
        key = removeSp(key);
        if(key.size() != 10)
        {
            std::cerr << "\033[31mError: DATE Values not valid\033[0m" << std::endl;
            continue;
        }
        delimiter_pos = key.find("-");
        std::string year = key.substr(0, delimiter_pos);
        std::string rest = key.substr(delimiter_pos+1);
        delimiter_pos = rest.find("-");
        std::string month = rest.substr(0, delimiter_pos);
        rest = rest.substr(delimiter_pos+1);
        delimiter_pos = rest.find("-");
        std::string day = rest.substr(0, delimiter_pos);
        if(!isValidDate(year, month, day))
        {
            std::cerr << "\033[31mError: DATE Values are not valid\033[0m" << std::endl;
            continue;           
        }

        std::cout << year << "-" << month << "-" << day << "=>";
        double result = btc_calc(datamap,  key,  value);
        std::cout  << result << std::endl;
    }
}