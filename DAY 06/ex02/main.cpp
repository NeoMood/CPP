/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:31:57 by sgmira            #+#    #+#             */
/*   Updated: 2023/02/23 17:33:49 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base *p;

	p = generate();

	std::cout << "POINTER Check" << std::endl;
	identify(p);

	std::cout << "REFERENCE Check" << std::endl;
	identify(*p);

	delete p;
	return 0;
}