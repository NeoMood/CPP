/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:52:46 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/23 17:32:46 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>


class A;
class B;
class C;

class Base
{
    public:
        virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif