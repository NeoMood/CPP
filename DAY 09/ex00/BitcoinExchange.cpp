/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:19:18 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/11 00:45:29 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}

// Destructor
BitcoinExchange::~BitcoinExchange()
{
}

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

bool isValidDate(std::string& year, std::string& month, std::string& day) {
    int res;
    try {
        int year_val = toInt(year, res);
        if (!isValidValue(year) || year_val < 0 || year_val > 9999) {
            return false;
        }
    } catch (...) {
        return false;
    }

    try {
        int month_val = toInt(month, res);
        if (!isValidValue(month) || month_val < 1 || month_val > 12) {
            return false;
        }
    } catch (...) {
        return false;
    }

    try {
        int day_val = toInt(day, res);
        if (!isValidValue(day) || day_val < 1 || day_val > 31) {
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

void BitcoinExchange::parse_input(char **av)
{
    std::ifstream userdata(av[1]);
    if (!userdata.is_open())
    { 
        std::cerr << "\033[31mError: Failed to open userdata file\033[0m" << std::endl;
        exit (1);
    }

    std::string line2;
    size_t delimiter_pos;
    std::getline(userdata, line2);
    if (line2 != "date | value") {
        std::cerr << "\033[31mError: first line should be 'date | value'\033[0m" << std::endl;
        exit (1);
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
        std::cout << "|" << day << "|" << std::endl;
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

void BitcoinExchange::get_datamap(void)
{
    std::ifstream database("data.csv");
    if (!database.is_open())
    {
        std::cerr << "\033[31mError: Failed to open database file\033[0m" << std::endl;
        exit(1);
    }

    // std::map<std::string, std::string> datamap;
    std::string line;
    size_t delimiter_pos;
    while (std::getline(database, line)) 
    {
        delimiter_pos = line.find(",");
        if (delimiter_pos == std::string::npos) {
            std::cerr << "\033[31mError: Invalid line format: " << line << "\033[0m" << std::endl;
            exit(1);
        }
        std::string key = line.substr(0, delimiter_pos);
        std::string value = line.substr(delimiter_pos+1);
        datamap[key] = value;
    }
    database.close();
}


// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
    this->datamap = assign.datamap;
	return *this;
}

