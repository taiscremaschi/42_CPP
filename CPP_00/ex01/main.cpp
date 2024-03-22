/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:17 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:37:31 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

bool getInput(std::string &input)
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

bool checkInput(std::string &input)
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
        if (!getInput(input))
            return false;
        if (checkInput(input))
            break;
    }
    return true;
}

bool addInfos(PhoneBook &phonebook) 
{
    std::string firstName, lastName, contactNbr, nickname, darkestSecret;

    if (!handleInfos("Enter the first name: ", firstName, MAGENTA))
        return false;

    if (!handleInfos("Enter the last name: ", lastName, MAGENTA))
        return false;
        
    while(true){
        std::cout << MAGENTA << "Enter the contact number: " << RESET;
        if (!getInput(contactNbr))
            return false;
        if(isNotNumber(contactNbr) == true)
            break ;
        std::cout << RED << "Please, insert just numbers\n" << RESET;
    }
    if (!handleInfos("Enter the nickname: ", nickname, MAGENTA))
        return false;
    if (!handleInfos("Enter the darkest secret: ", darkestSecret, RED))
        return false;
    Contact newContact(contactNbr, firstName, lastName, nickname, darkestSecret);
    phonebook.addContact(newContact);
    return true;
}

bool search(PhoneBook phonebook)
{
    std::string input;

    phonebook.listContacts();
    while(1)
    {
        std::cout << CYAN << "Choose the index you need or to return press '.': " << RESET;
        if(!getInput(input))
            return false;
        if(input == ".")
        {
            break ;
        }
        if(convertIndex(input) < phonebook.getSize() && convertIndex(input) > -1)
        {
            phonebook.getContact(convertIndex(input)).printContact();
        }
        else 
            std::cout <<  RED << "invalid index, try again!\n" << RESET;
    }
    return true;
}

int main()
{
    PhoneBook phonebook;

    std::cout << CYAN << "WELCOME TO THIS FANTASTIC TRIP!\n" << RESET;
    while(1)
    {
        std::string input;
        std::cout << BLUE << "Enter command ADD, SEARCH or EXIT: " << RESET;
        if(!getInput(input))
            break ;
        if(input == "ADD")
        {
           if (!addInfos(phonebook))
                break ;
        }
        else if(input == "SEARCH")
        {
            if(!search(phonebook))
                break ;
        }
        else if(input == "EXIT")
            break ;
        else
            std::cout <<  RED << "invalid command, try again!\n" << RESET;
    }
    std::cout << CYAN << "Bye!! See you next time! :)\n " << RESET;    
    return 0;
}