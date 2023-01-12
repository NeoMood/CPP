/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:23:29 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/12 22:46:04 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cctype>
# include <iostream>
# include <fstream>
# include <string.h>

int main(int ac, char **av)
{
    (void) ac;
    if(ac > 1)
    {
        std::string filename = av[1];
        // std::string s1;
        // std::string s2;
        std::ifstream file(filename);

        if(!file) {
            std::cout << "Failed to open file: " << filename << std::endl;
            return 1;
        }

        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
    }
    return 0;
}