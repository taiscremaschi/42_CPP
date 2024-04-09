/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:52:36 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 12:23:49 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// canonical form////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

AMateria::AMateria(){
    std:: cout << GREEN << "this is constructed default of AMateria" << RESET << std::endl;
    
}

AMateria::AMateria(const AMateria &other)
{
    std:: cout << BLUE << "this is constructed copy of AMateria" << RESET << std::endl;
    _type = other._type;
}

AMateria::~AMateria() {
    std:: cout << RED << "this is desconstructed of AMateria" << RESET << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other){
    
    std:: cout << BLUE << "this is assigment operator of AMateria" << RESET << std::endl;
    if(this !=  &other)
        _type = other._type;
    return *this;
}

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// functions     ////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////


AMateria::AMateria(std::string const &type){
    _type = type;
}

std::string const &AMateria::getType() const{
    return _type;
}

void AMateria::use(ICharacter& target){
    (void)target;
    std:: cout << RED << "The function needs to be implemented in the derived class." << RESET << std::endl;
} 
