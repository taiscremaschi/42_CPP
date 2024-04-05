/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:32 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 11:48:13 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std:: cout << BLUE << "this is the constructor of Cat" << RESET << std::endl;
    _Brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
    std:: cout << BLUE << "this is constructed copy Cat" << RESET << std::endl;
    _Brain = new Brain();

    
 }
Cat::~Cat(){
    std:: cout << BLUE << "this is desconstructor of cat" << RESET << std::endl;
    delete _Brain;
}

Cat &Cat::operator=(const Cat &other){
    if(this != &other)
        Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
    std:: cout << BLUE << "meoooww" << RESET << std::endl;
}

