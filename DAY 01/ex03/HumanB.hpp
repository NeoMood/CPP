/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:55:45 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 18:19:18 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define  HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(const std::string& n);
        const std::string& getName() const;
        void setWeapon(Weapon &Weaponname);
        void  attack();
        ~HumanB();
};

#endif