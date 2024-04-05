/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:54:21 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 11:15:46 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std:: cout << BLUE << "this is the constructor of WrongCat" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std:: cout << BLUE << "this is constructed copy WrongCat" << RESET << std::endl;
    
 }
WrongCat::~WrongCat(){
    std:: cout << BLUE << "this is desconstructor of WrongCat" << RESET << std::endl;
    
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    if(this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const {
    std:: cout << BLUE << "muuuuuuuhhhh" << RESET << std::endl;
}