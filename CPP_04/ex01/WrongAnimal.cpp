/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:54:28 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 22:46:14 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std:: cout << GREEN << "this is constructed default of Wrong animal" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type){
    std:: cout << GREEN << "this is constructor with parameter type Wrong animal" << RESET << std::endl;
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std:: cout << GREEN << "this is constructed copy Wrong animal" << RESET << std::endl;
    _type = other._type;
}

WrongAnimal::~WrongAnimal() {
    std:: cout << GREEN << "this is destructor of Wrong animal" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    
    std:: cout << GREEN << "this is assigment operator of Wrong animal" << RESET << std::endl;
    if(this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return _type;    
}

void WrongAnimal::makeSound() const {
    std:: cout << GREEN << "bééééééhhhh" << RESET << std::endl;
}
