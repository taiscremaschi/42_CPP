/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:01 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:34:58 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

Contact::Contact(std::string contactNbr, std::string firstName, std::string lastName,
    std::string nickname, std::string darkestSecret)
{
    _contactNbr = contactNbr;
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _darkestSecret = darkestSecret;
}

std::string Contact::getNbr()
{
    return(_contactNbr);
    
}
std::string Contact::getFirstName()
{
    return(_firstName);
    
}
std::string Contact::getLastName()
{
    return(_lastName);
}

std::string Contact::getNickname()
{
    return(_nickname);
    
}

std::string Contact::getSecret()
{
    return(_darkestSecret);
}


void Contact::printContact()
{
    std::cout << MAGENTA << "Number: " << getNbr() << RESET << std::endl;
    std::cout << MAGENTA << "First Name: " << getFirstName() << RESET << std::endl;
    std::cout << MAGENTA << "Last Name: " << getLastName() << RESET << std::endl;
    std::cout << MAGENTA << "Nickname: " << getNickname() << RESET << std::endl;
    std::cout <<  RED << "Darkest Secret: " << getSecret() << RESET << std::endl; 
}