/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:55:54 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/03 17:51:29 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Jack");

	std::cout << std::endl;
	
	clap.attack("Mike");
	clap.takeDamage(0);
	clap.beRepaired(20);
	
	std::cout << std::endl;
	
	clap.attack("ssss");
	clap.takeDamage(20);
	clap.beRepaired(5);
	
	std::cout << std::endl;

	return 0;
}