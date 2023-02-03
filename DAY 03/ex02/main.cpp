/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:55:54 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/02 22:27:34 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{

	ClapTrap clap("Saad");
	ScavTrap scav("Gmira");
	FragTrap frag("sgmira");
	
	std::cout << std::endl;
	
	clap.attack("Gmira");
	scav.takeDamage(0);
	scav.beRepaired(20);
	
	std::cout << std::endl;
	
	scav.guardGate();
	scav.attack("Saad");
	frag.attack("Saad");
	clap.takeDamage(20);
	clap.beRepaired(20);
	
	std::cout << std::endl;

	scav.attack("sgmira");
	frag.takeDamage(20);
	frag.highFivesGuys();

	std::cout << std::endl;
	
	return 0;
}