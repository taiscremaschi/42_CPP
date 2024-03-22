/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:31 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:38:03 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

PhoneBook::~PhoneBook() 
{
    
}

int     PhoneBook::getSize()
{        
    return(_index > 7 ? 8 : _index);
}

void PhoneBook::addContact(const Contact &newContact) 
{
    contacts[_index % 8] = newContact;
    _index++;
    std::cout << CYAN << "YES!! Contact added successfully!\n" << RESET;
}

Contact PhoneBook::getContact(int i)
{
    return (contacts[i]);
}

void PhoneBook::listContacts()
{
    int i = 0; 
    int size = getSize();
    
    std::cout << std::setw(10) << std::right << "Index" << " | "
          << std::setw(10) << std::right << "First Name" << " | "
          << std::setw(10) << std::right << "Last Name" << " | "
          << std::setw(10) << std::right << "Nickname" << std::endl;
    while(i < size)
    {
        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right << trunc(getContact(i).getFirstName()) << " | ";
        std::cout << std::setw(10) << std::right << trunc(getContact(i).getLastName()) << " | ";
        std::cout << std::setw(10) << std::right << trunc(getContact(i).getNickname()) << std::endl;
        i++;
    }
        
}