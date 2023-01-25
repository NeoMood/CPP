/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:23:29 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/25 23:31:34 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cctype>
# include <iostream>
# include <fstream>
# include <string.h>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream file(filename);

        if(s1.empty() || s2.empty())
        {
            std::cout << "Repalcement strings are not valid!" << std::endl;
            return 1;
        }
        if(!file) {
            std::cout << "Failed to open file: " << filename << std::endl;
            return 1;
        }
        std::ofstream outfile(filename + ".replace");

        std::string line;
        std::string save;
        while(std::getline(file, line))
        {
            save += line;
            save += '\n';
        }
        size_t pos = 0;
        while ((pos = save.find(s1, pos)) != std::string::npos)
        {
            save.erase(pos, s1.length());
            save.insert(pos, s2);
            pos += s2.length();
        }
        outfile << save << std::endl;
        file.close();
        outfile.close();
    }
    else if (ac > 4)
        std::cout << "Too many arguments" << std::endl;
    else 
        std::cout << "Not enough arguments" << std::endl;
    return 0;
}