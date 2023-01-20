/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:02:27 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/20 20:30:38 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"


class Cat : public Animal {
public:
    Cat();
    void makeSound() const;
	~Cat();
};
// std::ostream&	operator<<( std::ostream & o, Cat const & i );


#endif