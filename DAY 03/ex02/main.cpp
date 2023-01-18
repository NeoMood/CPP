/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:55:54 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/18 15:30:55 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{

	ClapTrap clap("Saad");
	ScavTrap scap("Gmira");
	FragTrap frap("sgmira");
	
	std::cout << std::endl;
	
	clap.attack("Gmira");
	scap.takeDamage(0);
	scap.beRepaired(20);
	
	std::cout << std::endl;
	
	scap.guardGate();
	scap.attack("Saad");
	clap.takeDamage(20);
	clap.beRepaired(20);
	
	std::cout << std::endl;

	scap.attack("sgmira");
	frap.takeDamage(20);
	frap.highFivesGuys();

	std::cout << std::endl;
	
	return 0;
}