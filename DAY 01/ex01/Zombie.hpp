/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:26:47 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/10 22:35:03 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define  ZOMBIE_HPP

# include <cctype>
# include <iostream>
# include <string.h>

class Zombie {
    public:
        Zombie();
        void setName(std::string name);
        void announce();
        ~Zombie();
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif