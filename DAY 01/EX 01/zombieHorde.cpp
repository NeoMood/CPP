/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:04:58 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/11 14:20:30 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
        zombies->announce();
    }
    return zombies;
}
