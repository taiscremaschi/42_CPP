/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:17 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:06:11 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

bool get_input(std::string &input)
{
    if(!std::getline(std::cin, input))
    {
        if(std::cin.eof())
        {   
            std::cin.clear();
            std::cout << RED << "\nInput invalid \n" << RESET;
        }
        return false;
    }
    return true;
    
}

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

bool handleInfos(std::string msg, std::string &input, std::string color)
{
    while (true)
    {
        std::cout << color << msg << RESET;
        if (!get_input(input))
            return false;
        if (check_input(input))
            break;
    }
    return true;
}

bool adc_infos(PhoneBook &phone_book) 
{
    std::string first_name, last_name, contact_nbr, nickname, darkest_secret;

    if (!handleInfos("Enter the first name: ", first_name, MAGENTA))
        return false;

    if (!handleInfos("Enter the last name: ", last_name, MAGENTA))
        return false;
        
    while(true){
        std::cout << MAGENTA << "Enter the contact number: " << RESET;
        if (!get_input(contact_nbr))
            return false;
        if(is_not_number(contact_nbr) == true)
            break ;
        std::cout << RED << "Please, insert just numbers\n" << RESET;
    }
    if (!handleInfos("Enter the nickname: ", nickname, MAGENTA))
        return false;
    if (!handleInfos("Enter the darkest secret: ", darkest_secret, RED))
        return false;
    Contact new_contact(contact_nbr, first_name, last_name, nickname, darkest_secret);
    phone_book.add_contact(new_contact);
    return true;
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
        if(!get_input(input))
            break ;
        if(input == "ADD")
        {
           if (!adc_infos(phone_book))
                break ;
        }
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