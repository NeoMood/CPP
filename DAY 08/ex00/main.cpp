/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 22:09:53 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/05 19:22:26 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> myVect;
    myVect.push_back(1337);
    myVect.push_back(42);
    myVect.push_back(21);
    myVect.push_back(7331);
    ::easyfind(myVect, 42);
    ::easyfind(myVect, 10);
    return 0;
}
