/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:44:13 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/14 15:48:04 by sgmira           ###   ########.fr       */
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
        void action(std::string action_name);
        ~Harl();
    private:
        void debug( void );

        void info( void );

        void warning( void );
        
        void error( void );
};


#endif