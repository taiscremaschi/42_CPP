/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:31 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 11:22:14 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

int     PhoneBook::get_index()
{
    return(_index);
}

void PhoneBook::add_contact(const Contact &new_contact) 
{
    contacts[_index % 8] = new_contact;
    _index++;
    std::cout << CYAN << "YES!! Contact added successfully!\n" << RESET;
}

Contact PhoneBook::getContact(int i)
{
    return (contacts[i]);
}