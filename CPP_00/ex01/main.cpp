/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:17 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 15:50:17 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

bool check_input(std::string &input)
{
    int i = 0;
    
    while(input[i])
    {
        if(input[i] != ' ' && input[i] != '\t')
            return true;
        i++;
    }
    std::cout << RED << "spaces need to be filled\n" << RESET;
    return false;   
}

void adc_infos(PhoneBook &phone_book) 
{
    std::string first_name, last_name, contact_nbr, nickname, darkest_secret;

    while(true){
        std::cout << MAGENTA << "Enter the first name: " << RESET;
        std::getline(std::cin, first_name);
        if(check_input(first_name))
            break;
    }
    while(true){
        std::cout << MAGENTA << "Enter the last name: " << RESET;
        std::getline(std::cin, last_name);
        if(check_input(last_name))
            break;
    }
    while(true){
        std::cout << MAGENTA << "Enter the contact number: " << RESET;
        std::getline(std::cin, contact_nbr);
        if(is_not_number(contact_nbr) == true)
            break ;
        std::cout << RED << "Please, insert just numbers\n" << RESET;
    }
    while(true){
        std::cout << MAGENTA << "Enter the nickname: " << RESET;
        std::getline(std::cin, nickname);
        if(check_input(nickname))
            break;
    }
    while(true){
        std::cout << RED << "Enter the darkest secret: " << RESET;
        std::getline(std::cin, darkest_secret);
        if(check_input(darkest_secret))
            break;
    }
    Contact new_contact(contact_nbr, first_name, last_name, nickname, darkest_secret);
    phone_book.add_contact(new_contact);
}


std::string trunc(std::string data)
{
    if(data.size() > 10)
    {
        data = data.substr(0, 9);
        data.push_back('.');
    }
    return data;
}

void search_contact (PhoneBook &phone_book)
{
    int i = 0; 
    int size = phone_book.get_size();
    
    std::cout << std::setw(10) << std::right << "Index" << " | "
          << std::setw(10) << std::right << "First Name" << " | "
          << std::setw(10) << std::right << "Last Name" << " | "
          << std::setw(10) << std::right << "Nickname" << std::endl;
    while(i < size)
    {
        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).getFirstName()) << " | ";
        std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).getLastName()) << " | ";
        std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).getNickname()) << std::endl;
        i++;
    }
        
}

void search(PhoneBook phone_book)
{
    std::string input;

    search_contact(phone_book);
    while(1)
    {
        std::cout << CYAN << "Choose the index you need or to return press '.': " << RESET;
        std::getline(std::cin, input);
        if(input == ".")
        {
            break ;
        }
        if(ft_atoi(input) < phone_book.get_size() && ft_atoi(input) > -1)
        {
            phone_book.getContact(ft_atoi(input)).print_contact();
        }
        else 
            std::cout <<  RED << "invalid index, try again!\n" << RESET;
    }

}

int main()
{
    PhoneBook phone_book;

    std::cout << CYAN << "WELCOME TO THIS FANTASTIC TRIP!\n" << RESET;
    while(1)
    {
        std::string input;
        std::cout << BLUE << "Enter command ADD, SEARCH or EXIT: " << RESET;
        std::getline(std::cin, input);

        if(input == "ADD")
           adc_infos(phone_book);
        else if(input == "SEARCH")
            search(phone_book);
        else if(input == "EXIT")
            break ;
        else
            std::cout <<  RED << "invalid command, try again!\n" << RESET;
    }
    std::cout << CYAN << "Bye!! See you next time! :)\n " << RESET;    
    return 0;
}
//ctrl d 
//
// espaços vazios n pode acei   