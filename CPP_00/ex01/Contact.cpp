/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:01 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 15:08:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

Contact::Contact(std::string contact_nbr, std::string first_name, std::string last_name,
    std::string nickname, std::string darkest_secret)
{
    _contact_nbr = contact_nbr;
    _first_name = first_name;
    _last_name = last_name;
    _nickname = nickname;
    _darkest_secret = darkest_secret;
}

std::string Contact::getNbr()
{
    return(_contact_nbr);
    
}
std::string Contact::getFirstName()
{
    return(_first_name);
    
}
std::string Contact::getLastName()
{
    return(_last_name);
}

std::string Contact::getNickname()
{
    return(_nickname);
    
}

std::string Contact::getSecret()
{
    return(_darkest_secret);
}


void Contact::print_contact()
{
    std::cout << MAGENTA << "Number: " << getNbr() << RESET << std::endl;
    std::cout << MAGENTA << "First Name: " << getFirstName() << RESET << std::endl;
    std::cout << MAGENTA << "Last Name: " << getLastName() << RESET << std::endl;
    std::cout << MAGENTA << "Nickname: " << getNickname() << RESET << std::endl;
    std::cout <<  RED << "Darkest Secret: " << getSecret() << RESET << std::endl; 
}