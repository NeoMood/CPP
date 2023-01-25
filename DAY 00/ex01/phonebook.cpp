/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:22:50 by sgmira            #+#    #+#             */
/*   Updated: 2023/01/25 18:15:59 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int i = 0;

Contact* PhoneBook::get_cont(){
    return(cont);
}

void phbprint(void)
{
    std::cout << "\033[0;32m-----------------------------------------------------------------------------\n"
              << std::endl;
    std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
    std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
    std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
    std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
    std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
    std::cout << "\n-----------------------------------------------------------------------------\n"
              << std::endl;
}

void search_menu(void)
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|███████████████ SEARCH MENU ███████████████|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|  INDEX   |  F.NAME  |  L.NAME  |  N.NAME  |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

void white_space(int len)
{
    int s;

    s = 10 - len;
    while (s)
    {
        std::cout << " ";
        s--;
    }
    std::cout << "|";
}

void display_cont(Contact *contact)
{
    std::string str;
    search_menu();
    int contactCount = 0;
    int j = 0;
    while (contactCount < 8)
    {
        if (j >= 8) {
            break;
        }
        if (!contact[j].get_first_name().empty()) {
            std::cout << "|"
                    << "    " << j + 1 << "     "
                    << "|";
            str = contact[j].get_first_name();
            if (str.length() <= 10)
            {
                std::cout << str;
                white_space(str.length());
            }
            else
                std::cout << str.substr(0, 9) << "."
                        << "|";
            str = contact[j].get_last_name();
            if (str.length() <= 10)
            {
                std::cout << str;
                white_space(str.length());
            }
            else
                std::cout << str.substr(0, 9) << "."
                        << "|";
            str = contact[j].get_nickname();
            if (str.length() <= 10)
            {
                std::cout << str;
                white_space(str.length());
            }
            else
                std::cout << str.substr(0, 9) << "."
                        << "|";
            std::cout << std::endl;
            std::cout << "---------------------------------------------" << std::endl;
            contactCount++;
        }
        j++;
    }
    if (contactCount == 0)
        std::cout << "There is no contact in your library!" << std::endl;
    else
        std::cout << "Pick a number to display the contact:" << std::endl;
}



void display_cont2(Contact *contact)
{
    std::string str;
    int j;
    j = 0;
    while (getline(std::cin, str))
    {
        if((atoi(str.c_str()) > 0 && atoi(str.c_str()) < 9))
        {
            if (contact[atoi(str.c_str()) - 1].get_first_name().empty())
            {
                std::cout << "This is not a valid number!" << std::endl;
                break;
            }
            else if (str.empty())
                std::cout << "Please pick a number" << std::endl;
            else
            {
                j = atoi(str.c_str()) - 1;
                std::cout << "---------------------------------------------" << std::endl;
                std::cout << "First Name : " << contact[j].get_first_name() << std::endl;
                std::cout << "Last Name : " << contact[j].get_last_name() << std::endl;
                std::cout << "NickName : " << contact[j].get_nickname() << std::endl;
                std::cout << "Phone Number : " << contact[j].get_phone_number() << std::endl;
                std::cout << "Darkest Secret : " << contact[j].get_darkest_secret() << std::endl;
                std::cout << "---------------------------------------------" << std::endl;
                break;
            }
        }
        else 
        {
            std::cout << "This is not a valid number!" << std::endl;
                break;
        }
    }
    std::cout << "Press enter to continue ..." << std::endl;
}

void add_contact(Contact *contact)
{
    std::string str;

    while (1)
    {
        std::cout << "Please set the first name" << std::endl;
        if (!getline(std::cin,str))
			exit(0);
        contact[i].set_first_name(str);
        if (str[0] != '\0')
			break ;
    }
    while (1)
    {
        std::cout << "Please set the last name" << std::endl;
        if (!getline(std::cin,str))
            exit(0);
        contact[i].set_last_name(str);
        if (str[0] != '\0')
			break ;
    }
    while (1)
    {
        std::cout << "Please set the nickname" << std::endl;
        if (!getline(std::cin,str))
			exit(0);
        contact[i].set_nickname(str);
        if (str[0] != '\0')
			break ;
    }
    while (1)
    {
        std::cout << "Please set the phone number" << std::endl;
        if (!getline(std::cin,str))
			exit(0);
        contact[i].set_phone_number(str);
        if (str[0] != '\0')
			break ;
    }
    while (1)
    {
        std::cout << "Please set the darkest secret" << std::endl;
        if (!getline(std::cin,str))
			exit(0);
        contact[i].set_darkest_secret(str);
        if (str[0] != '\0')
			break ;
    }
    std::cout << "Press enter to continue ..." << std::endl;
}

int main()
{
    PhoneBook pbook;
    std::string str;

    phbprint();
    std::cout << "Please enter a command" << std::endl;
    while (getline(std::cin, str))
    {
        if (str.empty())
            std::cout << "Please enter a command" << std::endl;
        else
        {
            if (str == "ADD")
            {
                if (i == 8)
                    i = 0;
                add_contact(pbook.get_cont());
                i++;
            }
            else if (str == "SEARCH")
            {
                display_cont(pbook.get_cont());
                display_cont2(pbook.get_cont());
            }
            else if (str == "EXIT")
                exit(0);
            else
                std::cout << "not a valid command" << std::endl;
        }
    }
}

