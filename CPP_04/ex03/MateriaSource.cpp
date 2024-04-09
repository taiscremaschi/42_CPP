/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:50:57 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 11:03:27 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std:: cout << GREEN << "this is constructed default of MateriaSource" << RESET << std::endl;
}

MateriaSource::MateriaSource(std::string name) {
    std:: cout << GREEN << "this is constructed default of MateriaSource" << RESET << std::endl;
    _name = name;
}


MateriaSource::MateriaSource(const MateriaSource &other)
{
    std:: cout << BLUE << "this is constructed copy of MateriaSource" << RESET << std::endl;
    _name = other._name;
    
}

MateriaSource::~MateriaSource() {
    std:: cout << RED << "this is desconstructed" << RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    
    std:: cout << BLUE << "this is assigment operator" << RESET << std::endl;
    if(this !=  &other)
        _name = other._name;
    return *this;
}


void MateriaSource::learnMateria(AMateria*){
            
}

AMateria* MateriaSource::createMateria(std::string const & type){
            
}