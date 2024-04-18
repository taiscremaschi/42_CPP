/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:50:57 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 10:38:21 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std:: cout << GREEN << "this is constructed default of MateriaSource" << RESET << std::endl;
     for(int i = 0; i < 4; i++) {
        _inventary[i] = NULL;
    }   
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std:: cout << BLUE << "this is constructed copy of MateriaSource" << RESET << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        if (other._inventary[i] != NULL) 
            _inventary[i] = other._inventary[i]->clone();
        else
            _inventary[i] = NULL;
    }
 
}

MateriaSource::~MateriaSource() {
    std:: cout << RED << "this is desconstructed of MateriaSource" << RESET << std::endl;
    for(int i = 0; i < 4; i++) {
        if(_inventary[i] != NULL)
            delete _inventary[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    
    std:: cout << BLUE << "this is assigment operator of MateriaSource" << RESET << std::endl;
    if(this !=  &other)
    {    
        for(int i = 0; i < 4; i++) {
            if(_inventary[i] != NULL)
                delete _inventary[i];
        }
        for(int i = 0; i < 4; i++) {
            _inventary[i] = other._inventary[i]->clone();
        }
    }
    return *this;
}


void MateriaSource::learnMateria(AMateria* materia){
    int i = 0;
    if(!materia)
    {
        std::cout << "no valid materia\n";
        return;
    }
    while(i < 4) {
        if (_inventary[i] == NULL) 
        {
            std:: cout << BLUE << "learn materia done successfully" << RESET << std::endl;
            _inventary[i] = materia;
                return;
        }
        else
            i++;
    }
    std:: cout << BLUE << "error in learn Materia" << RESET << std::endl;
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++)
    {
        if (_inventary[i]->getType() == type)
        {
            std:: cout << BLUE << "create materia!" << RESET << std::endl;
            return _inventary[i];
        }
    }
    std:: cout << BLUE << "error in create materia" << RESET << std::endl;
    return NULL;    
}