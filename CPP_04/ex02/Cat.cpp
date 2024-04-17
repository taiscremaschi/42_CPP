/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:32 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/17 09:11:32 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std:: cout << BLUE << "this is the constructor of Cat" << RESET << std::endl;
    _brain = new Brain();
}

Cat::Cat(const Cat &other) {
    std:: cout << BLUE << "this is constructed copy Cat" << RESET << std::endl;
    _brain = new Brain(*other._brain);

    
 }
Cat::~Cat(){
    std:: cout << BLUE << "this is destructor of cat" << RESET << std::endl;
    delete _brain;
}
Cat &Cat::operator=(const Cat &other){
     if(this == &other)
        return *this;
    this->_brain = new Brain(*other._brain);
    return *this;
}

void Cat::makeSound() const {
    std:: cout << BLUE << "meoooww" << RESET << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return (_brain);
}