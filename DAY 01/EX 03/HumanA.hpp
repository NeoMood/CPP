/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:50:44 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 18:34:19 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define  HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(const std::string& n, Weapon& w);
        const std::string& getName() const;
        const std::string& getWeaponType() const;
        void  attack();
        ~HumanA();
};

#endif