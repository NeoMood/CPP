/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:51:34 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/22 22:35:30 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private :
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
		int		id;
	public :
        std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
        void	set_first_name(std::string	first_n);
		void	set_last_name(std::string	last_name);
		void	set_nickname(std::string	nickname);
		void	set_phone_number(std::string	phone_number);
		void	set_darkest_secret(std::string	darkest_secret);
		void	set_id(int idd);
};

#endif