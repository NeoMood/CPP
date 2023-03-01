/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:18:03 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/27 22:32:46 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>
# include <string>
// template<typename T>
// void Iter(T& a, T& b, T& c) {
//     T temp = a;
//     a = b;
//     b = temp;
// }

template<typename T, typename Func>
void iter(T* arr, int len, Func func) {
    for(int i=0; i<len; i++) {
        func(arr[i]);
    }
}


#endif