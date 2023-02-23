/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:27:23 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/23 02:15:12 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// // Constructors
// Serializer::Serializer()
// {
// 	std::cout << "\e[0;33mDefault Constructor called of Serializer\e[0m" << std::endl;
// }

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

// // Destructor
// Serializer::~Serializer()
// {
// 	std::cout << "\e[0;31mDestructor called of Serializer\e[0m" << std::endl;
// }
