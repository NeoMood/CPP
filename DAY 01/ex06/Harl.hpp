/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:44:13 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/26 20:44:34 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <cctype>
# include <iostream>
# include <fstream>
# include <string.h>

class Harl {
    public:
        Harl();
        void complain(std::string level);
        ~Harl();
    private:
        void debug( void );

        void info( void );

        void warning( void );
        
        void error( void );
};


#endif