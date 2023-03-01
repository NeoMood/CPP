/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:39:23 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/27 22:32:30 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void printendl(int x) {
    std::cout << x << std::endl;
}

void printendl_2(std::string s) {
    std::cout << "~" << s << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, printendl);

    std::string arr_2[] = {"This", "Is", "a", "Test", "for", "My Iter Template"};
    iter(arr_2, 6, printendl_2);
    return 0;
}
