/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:35:06 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/19 13:19:49 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
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
    std::map<std::string, std::string>::iterator it;
    while (std::getline(database, line)) 
    {
        delimiter_pos = line.find(",");
        std::string key = line.substr(0, delimiter_pos);
        std::string value = line.substr(delimiter_pos+1);
        // std::cout <<key << " - "<< value<< std::endl;
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
    while(std::getline(userdata, line2))
    {

        delimiter_pos = line2.find("|");
        std::string key = line2.substr(0, delimiter_pos);
        std::string value;
        if(line2.find("|") == std::string::npos)
            value = "";
        else
            value = line2.substr(delimiter_pos+1);
        if(key == "date ")
        {
            continue;
        }
        if(atof(value.c_str()) < 0)
        {
            std::cerr << "\033[31mError: not a positive number\033[0m" << std::endl;
            continue;
        }
        if(atof(value.c_str()) > 1000)
        {
            std::cerr << "\033[31mError: Value is too large\033[0m" << std::endl;
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

        if(std::stoi(year) < 1 || std::stoi(month) > 12 || std::stoi(month) < 1 || std::stoi(day) > 31 || std::stoi(day) < 0 || (std::stoi(month) == 2 && (std::stoi(day) > 29 || std::stoi(day) < 1)))
        {
            std::cerr << "\033[31mError: Bad input" << " => " << key << "\033[0m" << std::endl;
            continue;
        }
        float btcvalue;
        std::string key_date = key.substr(0, key.length() - 1);
        if(datamap.find(key_date) == datamap.end())
        {
            it = datamap.upper_bound(key_date);
            if(it != datamap.begin())
                it--;
            btcvalue = atof(it->second.c_str());
        }
        else
            btcvalue =  atof(datamap[key_date].c_str());
        std::cout << year << "-" << month << "-" << day << "=>" << value << " = " << atof(value.c_str()) * btcvalue << std::endl;
    }
}