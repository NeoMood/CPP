/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:37:47 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/25 18:57:01 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define  WEAPON_HPP

# include <cctype>
# include <iostream>
# include <string.h>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string wtype);
        const std::string& getType() const;
        void setType(std::string type);
        ~Weapon();
};

#endif