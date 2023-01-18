#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>

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
        std::string	get_first_name(){
			return (first_name);
		}
		std::string	get_last_name(){
			return (last_name);
		}
		std::string	get_nickname(){
			return(nickname);
		}
		std::string	get_phone_number(){
			return(phone_number);	
		}
		std::string	get_darkest_secret(){
			return(darkest_secret);
		}
        void	set_first_name(std::string	first_n){
			this->first_name = first_n;
		}
		void	set_last_name(std::string	last_name){
			this->last_name = last_name;
		}
		void	set_nickname(std::string	nickname){	
			this->nickname = nickname;
		}
		void	set_phone_number(std::string	phone_number){
			this->phone_number = phone_number;
		}
		void	set_darkest_secret(std::string	darkest_secret){
			this->darkest_secret = darkest_secret;
		}
		void	set_id(int idd){
			this->id = idd;
		}
};

class PhoneBook
{
	private :
		Contact cont[8];
	public :
		Contact *get_cont(){
			return(cont);
		}
};

#endif