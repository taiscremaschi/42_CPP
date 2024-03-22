/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:17 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 11:25:02 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void adc_infos(PhoneBook &phone_book) 
{
    std::string first_name, last_name, contact_nbr, nickname, darkest_secret;

    std::cout << MAGENTA << "Enter the first name: " << RESET;
    std::getline(std::cin, first_name);

    std::cout << MAGENTA << "Enter the last name: " << RESET;
    std::getline(std::cin, last_name);
    while(true)
    {
        std::cout << MAGENTA << "Enter the contact number: " << RESET;
        std::getline(std::cin, contact_nbr);
        if(is_not_number(contact_nbr) == true)
            break ;
        std::cout << RED << "Please, insert just numbers\n" << RESET;
    }
    std::cout << MAGENTA << "Enter the nickname: " << RESET;
    std::getline(std::cin, nickname);

    std::cout << RED << "Enter the darkest secret: " << RESET;
    std::getline(std::cin, darkest_secret);

    Contact new_contact(contact_nbr, first_name, last_name, nickname, darkest_secret);
    phone_book.add_contact(new_contact);
}


// void trunc(Contact &contact, int size)
// {

// }

void search_contact (Contact &contacts, PhoneBook &phone_book)
{
    (void) contacts;
    (void) phone_book;
    //int i = 0; 
    //int index = phone_book.get_index();
    
    std::cout << std::setw(10) << std::right << "Index" << " | "
          << std::setw(10) << std::right << "First Name" << " | "
          << std::setw(10) << std::right << "Last Name" << " | "
          << std::setw(10) << std::right << "Nickname" << std::endl;
    // while(i <= index)
    // {
    //     std::cout << std::setw(10) << std::right << i << " | ";
    //     std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).first_name(), 10) << " | ";
    //     std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).last_name(), 10) << " | ";
    //     std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).nickname(), 10) << std::endl;
    // }
        
}
void choise_contact(PhoneBook &phone_book)
{
    (void)phone_book;

}



int main()
{
    PhoneBook phone_book;
    Contact contacts;

    std::cout << CYAN << "WELCOME TO THIS FANTASTIC TRIP!\n" << RESET;
    while(1)
    {
        std::string input;
        std::cout << BLUE << "Enter command ADD, SEARCH or EXIT: " << RESET;
        std::getline(std::cin, input);

        if(input == "ADD")
        {
           adc_infos(phone_book);
        }
        else if(input == "SEARCH")
        {
            while(1)
            {
                search_contact(contacts, phone_book);
                std::cout << CYAN << "Choose the index you need or to return press '.': " << RESET;
                std::getline(std::cin, input);
                if(input == ".")
                {
                    break ;
                }
                if(ft_atoi(input) <= phone_book.get_index() && ft_atoi(input) > -1)
                {
                    choise_contact(phone_book);
                    continue ;
                }
                else 
                    std::cout <<  RED << "invalid index, try again!\n" << RESET;
            }
        }
        else if(input == "EXIT")
        {
            std::cout << CYAN << "Bye!! See you next time! :)\n " << RESET;
            break ;
        }
        else
        {
            std::cout <<  RED << "invalid command, try again!\n" << RESET;
        }
    }
    
    return 0;
}