/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:42:37 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/27 19:49:52 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data* data = new Data;
    data->x = 20;
    data->y = 13.2;

    uintptr_t serialized = Serializer::serialize(data);

    std::cout << "Serialized value: " << serialized << std::endl;

    Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "Deserialized values: " << deserialized->x << ", " << deserialized->y << std::endl;

    delete data;
    return 0;
}
