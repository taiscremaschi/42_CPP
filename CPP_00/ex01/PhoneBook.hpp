/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:36 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:31:48 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {

private:
    Contact contacts[8];
    int _index;

public:
    
    PhoneBook();
    ~PhoneBook();
    
    void addContact(const Contact &new_contact);
    int getSize();
    void listContacts();
    Contact getContact(int i);
};


bool isNotNumber(std::string &str);
int convertIndex(std::string s);
std::string trunc(std::string data);

#endif