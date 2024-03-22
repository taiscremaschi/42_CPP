/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:01 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 11:35:33 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

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
std::string Contact::getFistName()
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

Contact::~Contact() {};