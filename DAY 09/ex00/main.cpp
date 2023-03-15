/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:35:06 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/16 00:04:11 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    size_t delimiter_pos;
    if(ac != 2)
    {
        std::cerr << "ERROR: Number of arguments is not valid!" << std::endl;
        return 1;
    }
    
    std::ifstream database("data.csv");
    if (!database.is_open())
    { 
        std::cerr << "ERROR: Failed to open database file" << std::endl;
        return 1;
    }
    
    std::map<std::string, std::string> datamap;
    std::string line;
    while (std::getline(database, line)) 
    {
        delimiter_pos = line.find(",");
        std::string key = line.substr(0, delimiter_pos);
        std::string value = line.substr(delimiter_pos+1);
        datamap[key] = value;
    }
    
    std::ifstream userdata(av[1]);
    if (!userdata.is_open())
    { 
        std::cerr << "ERROR: Failed to open userdata file" << std::endl;
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
            std::cerr << "ERROR: date is not valid" << std::endl;
            return 1;
        }
        if(std::stoi(value) < 0 || std::stoi(value) > 1000)
        {
            std::cerr << "ERROR: value is not valid" << std::endl;
            return 1;
        }
        std::cout << year << " | " << month << " | " << day << " : " << value << std::endl;
    }
    // std::map<std::string, std::string> datamap2;
    // std::string line2;
    // while (std::getline(userdata, line2))
    // {
    //     if (line2.find("|") == std::string::npos)
    //     {
    //         std::string key = line2.substr(0, delimiter_pos);
    //         datamap2[key] = "";
    //     }
    //     else
    //     {
    //         delimiter_pos = line2.find("|");
    //         std::string key = line2.substr(0, delimiter_pos);
    //         std::string value = line2.substr(delimiter_pos+1);
    //         datamap2[key] = value;
    //     }
    // }
    
    // std::map<std::string, std::string>::const_iterator it;
    // for (it = datamap2.begin(); it != datamap2.end(); ++it) {
    //     std::cout << it->first << "=>" << it->second << std::endl;
    // }
    
}