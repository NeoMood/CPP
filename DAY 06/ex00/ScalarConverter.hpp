/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:08:18 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/23 19:58:29 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <climits>

class ScalarConverter
{
	public:
		static void convert(std::string str);
	private:
		// Constructors
		ScalarConverter();
		// Destructor
		~ScalarConverter();
};

void convert_double(std::string str);
void convert_float(std::string str);
void convert_char(std::string str);
void convert_int(std::string str);
bool isit_double(std::string str);
bool isit_float(std::string str);
bool isit_int(std::string str);

#endif
