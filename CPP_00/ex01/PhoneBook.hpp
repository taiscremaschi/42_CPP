/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:36 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 15:05:55 by tbolzan-         ###   ########.fr       */
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
    
    void add_contact(const Contact &new_contact);
    int get_size();
    Contact getContact(int i);
};


bool is_not_number(std::string &str);
int ft_atoi(std::string s);


#endif