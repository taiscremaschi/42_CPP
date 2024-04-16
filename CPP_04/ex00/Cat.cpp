/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:32 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 22:46:14 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std:: cout << BLUE << "this is the constructor of Cat" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
    std:: cout << BLUE << "this is constructed copy Cat" << RESET << std::endl;
    
 }
Cat::~Cat(){
    std:: cout << BLUE << "this is destructor of cat" << RESET << std::endl;
    
}

Cat &Cat::operator=(const Cat &other){
    if(this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
    std:: cout << BLUE << "meoooww" << RESET << std::endl;
}