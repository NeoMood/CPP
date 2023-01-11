/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:37:47 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/11 15:12:15 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define  WEAPON_HPP

# include <cctype>
# include <iostream>
# include <string.h>

class Weapon {
    public:
        Weapon(){   
        }
        const std::string& getType() const 
        {
            return type;
        }
        void setType(std::string)
        {
            this->type = type;
        }
        ~Weapon(){   
        }
    private:
        std::string type;
};

class HumanA {
    public:
        std::string name;
};

#endif