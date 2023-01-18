#include "phonebook.hpp"
int i = 1;

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
    int j = 1;
    while (j <= 8 && !contact[j].get_first_name().empty())
    {
        if (contactCount < 8 || !contact[j].get_first_name().empty()) {
            std::cout << "|"
                    << "    " << j << "     "
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
    if (i == 0)
        std::cout << "There is no contact in your library!" << std::endl;
    else
        std::cout << "Pick a number to diplay the contact:" << std::endl;
}

void display_cont2(Contact *contact)
{
    std::string str;
    int j;
    j = 0;
    while (getline(std::cin, str))
    {
        if (atoi(str.c_str()) <= 0)
        {
            std::cout << atoi(str.c_str());
            std::cout << "This is not a valid number!" << std::endl;
        }
        else if (str.empty())
            std::cout << "Please pick a number" << std::endl;
        else
        {
            j = atoi(str.c_str());
            break;
        }
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|  INDEX   |  F.NAME  |  L.NAME  |  N.NAME  |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|"
              << "    " << j << "     "
              << "|";
    str = contact[j].get_first_name();
    if (str.length() <= 10)
    {
        std::cout << str;
        white_space(str.length());
    }
    else
        std::cout << str.substr(0, 8) << "."
                  << "|";
    str = contact[j].get_last_name();
    if (str.length() <= 10)
    {
        std::cout << str;
        white_space(str.length());
    }
    else
        std::cout << str.substr(0, 8) << "."
                  << "|";
    str = contact[j].get_nickname();
    if (str.length() <= 10)
    {
        std::cout << str;
        white_space(str.length());
    }
    else
        std::cout << str.substr(0, 8) << "."
                  << "|";
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Press space to continue ..." << std::endl;
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
    std::cout << "Press space to continue ..." << std::endl;
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
                    i = 1;
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