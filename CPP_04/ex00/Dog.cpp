/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 15:23:57 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std:: cout << BLUE << "this is the constructor of Dog" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std:: cout << BLUE << "this is constructed copy Dog" << RESET << std::endl;
    
 }
Dog::~Dog(){
    std:: cout << BLUE << "this is desconstructor of Dog" << RESET << std::endl;
    
}

Dog &Dog::operator=(Dog &other){
    if(this != &other)
        Animal::operator=(other);
    return *this;
}
