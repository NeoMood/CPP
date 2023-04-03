/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:43:17 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/30 22:37:31 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(const RPN &copy);
		// Destructor
		~RPN();
		
		// Operators
		RPN & operator=(const RPN &assign);
		
	private:
		
};
int RPN_process(std::string expression);

#endif