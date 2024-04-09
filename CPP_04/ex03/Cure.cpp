/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:43:37 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 12:24:30 by tbolzan-         ###   ########.fr       */
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

Cure::Cure(const Cure &other) :  AMateria(other)
{
    std:: cout << BLUE << "this is constructed copy of cure" << RESET << std::endl;
}

Cure::~Cure() {
    std:: cout << RED << "this is desconstructed of cure" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &other){
    
    std:: cout << BLUE << "this is assigment operator of cure" << RESET << std::endl;
    if(this !=  &other)
        AMateria::operator=(other);
    return *this;
}

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// functions     ////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

AMateria* Cure::clone() const {
        return new Cure(*this); 
    }

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s  wounds *" << std::endl;
}
