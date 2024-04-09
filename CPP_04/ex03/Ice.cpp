/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:43:48 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 16:53:35 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.hpp"
#include "Ice.hpp"

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// canonical form////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

Ice::Ice() : AMateria("ice") {
    std:: cout << GREEN << "this is constructed default of Ice" << RESET << std::endl;
    
}

Ice::Ice(const Ice &other) :  AMateria(other)
{
    std:: cout << BLUE << "this is constructed copy of ice" << RESET << std::endl;
}

Ice::~Ice() {
    std:: cout << RED << "this is desconstructed" << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &other){
    
    std:: cout << BLUE << "this is assigment operator" << RESET << std::endl;
    if(this !=  &other)
    return *this;
}

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// functions     ////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

AMateria* Ice::clone() const {
        return new Ice(*this); 
}

void Ice::use(ICharacter& target){
    
    std::cout << "* shoots an ice bolt at " << &target << " *" << std::endl;
    
}
