/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:33:43 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 22:46:14 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std:: cout << GREEN << "this is constructed default of animal" << RESET << std::endl;
}

Animal::Animal(const std::string type){
    std:: cout << GREEN << "this is constructor with parameter type animal" << RESET << std::endl;
    _type = type;
}

Animal::Animal(const Animal &other)
{
    std:: cout << GREEN << "this is constructed copy animal" << RESET << std::endl;
    _type = other._type;
}

Animal::~Animal() {
    std:: cout << GREEN << "this is destructor of animal" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    
    std:: cout << GREEN << "this is assigment operator of animal" << RESET << std::endl;
    if(this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

std::string Animal::getType() const {
    return _type;    
}

void Animal::makeSound() const {
    std:: cout << GREEN << "no sound partner" << RESET << std::endl;
}
