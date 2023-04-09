/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:43:17 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/08 16:25:43 by sgmira           ###   ########.fr       */
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
		
	private:
		std::stack<int> mystack;
};

#endif