/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:23:29 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/13 16:53:24 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cctype>
# include <iostream>
# include <fstream>
# include <string.h>

int main(int ac, char **av)
{
    if(ac > 3)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream file(filename);

        if(!file) {
            std::cout << "Failed to open file: " << filename << std::endl;
            return 1;
        }
        std::ofstream outfile(filename + ".replace");

        std::string line;
        while (std::getline(file, line)) 
        {
            size_t pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos += s2.length();
            }
            outfile << line << std::endl;
        }
        file.close();
        outfile.close();
    }
    else 
        std::cout << "Not enough arguments" << std::endl;
    return 0;
}