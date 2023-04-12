/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:39:12 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/11 16:53:43 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
#include <sstream>
# include <map>

class BitcoinExchange
{
	public:
		// Constructors
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		
		// Destructor
		~BitcoinExchange();
		
		// Operators
		BitcoinExchange & operator=(const BitcoinExchange &assign);
		void parse_input(char **av);
		void get_datamap(void);
		
	private:
		std::map<std::string, std::string> datamap;
};

bool isValidDate(std::string& year, std::string& month, std::string& day);
std::string removeSp(std::string str);
double btc_calc(std::map<std::string, std::string> datamap,  std::string key,  std::string value);
bool isValidValue(std::string& str);
bool isValidValue2(std::string& str);
int toInt(std::string number, int& result);

#endif