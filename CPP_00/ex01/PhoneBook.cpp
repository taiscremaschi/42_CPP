/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:31 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 11:10:33 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int     Phone_Book::get_index()
{
    return(_index);
}

void Phone_Book::add_contact(const Contact &new_contact) 
{

    contacts[_index % 8] = new_contact;
    _index++;
    std::cout << CYAN << "YES!! Contact added successfully!\n" << RESET;
}

Contact Phone_Book::getContact(int i)
{
    return (contacts[i]);
}