/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 11:16:57 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std:: cout << MAGENTA << "this is the constructor of Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std:: cout << MAGENTA << "this is constructed copy Dog" << RESET << std::endl;
    
 }
Dog::~Dog(){
    std:: cout << MAGENTA << "this is desconstructor of Dog" << RESET << std::endl;
    
}

Dog &Dog::operator=(const Dog &other){
    if(this != &other)
        Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const {
    std:: cout << MAGENTA << "au au au" << RESET << std::endl;
}