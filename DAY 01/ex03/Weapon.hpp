/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:37:47 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 20:23:03 by sgmira           ###   ########.fr       */
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

// In the case of HumanA, the weapon attribute is required and always exists,
// so it's appropriate to use a reference. A reference cannot be null and it always refers to an object. 
// Using a reference in this case ensures that the weapon attribute is always valid and eliminates the need for null pointer checks.

// In contrast, the weapon attribute in HumanB is optional and may not always exist,
//  so it's appropriate to use a pointer. A pointer can be null and it can be tested
// to see if it points to a valid object or not. 
// Using a pointer in this case allows the weapon attribute to be optional and eliminates the need to instantiate a weapon when it's not needed.

// It's worth noting that, In C++, when you pass an object by value, it is copied. 
// In order to avoid this, it is better to pass it by reference or pointer. 
// In this case, HumanA class the weapon object is passed by reference and it will not copy the object. 
// HumanB class uses pointer, because it may not always have a weapon, 
// so it is better to use a pointer in this case, it can have a null value if it doesn't have a weapon.


#endif