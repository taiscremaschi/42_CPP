/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:43:37 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 16:43:48 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.hpp"
#include "Cure.hpp"

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// canonical form////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

Cure::Cure() : AMateria("cure") {
    std:: cout << GREEN << "this is constructed default of cure" << RESET << std::endl;
    
}

Cure::Cure(const Cure &other) :  AMateria("cure")
{
    std:: cout << BLUE << "this is constructed copy" << RESET << std::endl;
}

Cure::~Cure() {
    std:: cout << RED << "this is desconstructed" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &other){
    
    std:: cout << BLUE << "this is assigment operator" << RESET << std::endl;
    if(this !=  &other)
    return *this;
}

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// functions     ////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

AMateria* Cure::clone() const {
        return new Cure(*this); 
    }

void Cure::use(ICharacter& target){
    
    std::cout << "* heals " << &target << "'s  wounds *" << std::endl;
    
}
