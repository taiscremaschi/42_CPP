/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/19 13:53:31 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std:: cout << MAGENTA << "this is the constructor of Dog" << RESET << std::endl;
    _brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
    std:: cout << MAGENTA << "this is constructed copy Dog" << RESET << std::endl;
    _brain = new Brain(*other._brain);    
}

Dog::~Dog(){
    std:: cout << MAGENTA << "this is destructor of Dog" << RESET << std::endl;
    delete _brain;
}

Dog &Dog::operator=(const Dog &other){
    std:: cout << BLUE << "this is operator Dog" << RESET << std::endl;
    if(this == &other)
        return *this;
    Animal::operator=(other);
    if(_brain)
        delete _brain;
    this->_brain = new Brain(*other._brain);
    return *this;
}

void Dog::makeSound() const {
    std:: cout << MAGENTA << "au au au" << RESET << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return (_brain);
}