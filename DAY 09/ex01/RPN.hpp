/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:43:17 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/10 23:58:04 by sgmira           ###   ########.fr       */
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
		RPN();
		RPN(const RPN &copy);
		~RPN();
		RPN & operator=(const RPN &assign);
		int RPN_process(std::string expression);
		std::stack<int> get_mystack();
		
	private:
		std::stack<int> mystack;
};

#endif