/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:33:02 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/01 23:30:45 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <iterator>
# include <list>

template <typename T>
void easyfind(T a, int i)
{
    typename T::iterator it = std::find(a.begin(), a.end(), i);

    if (std::find(a.begin(), a.end(), i) != a.end())
        std::cout << "the first occurrence of " << i << " is found at index " << std::distance(a.begin(), it) << std::endl;
    else
        std::cout << "the first occurrence of " << i << " is not found" << std::endl;
}

#endif