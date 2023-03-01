/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyTemplates.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:55:23 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/27 21:11:08 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYTEMPLATES_HPP
#define MYTEMPLATES_HPP

# include <iostream>
# include <string>

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T a, T b) {
    return (a <= b) ? a : b;
}

template<typename T>
T max(T a, T b) {
    return (a >= b) ? a : b;
}


#endif