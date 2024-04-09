/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:59:46 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 10:12:25 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// canonical form////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

Character::Character() {
    std:: cout << GREEN << "this is constructed default of Character" << RESET << std::endl;
    for(int i = 0; i < 4; i++) {
        _inventary[i] = NULL;
    }   
}

Character::Character(std::string name) {
    std:: cout << GREEN << "this is constructed default of Character" << RESET << std::endl;
    _name = name;
        
    for(int i = 0; i < 4; i++) {
        _inventary[i] = NULL;
    }   
}


Character::Character(const Character &other)
{
    std:: cout << BLUE << "this is constructed copy of Character" << RESET << std::endl;
    for(int i = 0; i < 4; i++) {
       delete _inventary[i];
     }
    for(int i = 0; i < 4; i++) {
        other._inventary[i] = NULL;
     }
}

Character::~Character() {
    std:: cout << RED << "this is desconstructed" << RESET << std::endl;
    
    for(int i = 0; i < 4; i++) {
       delete _inventary[i];
     }
}

Character &Character::operator=(const Character &other){
    
    std:: cout << BLUE << "this is assigment operator" << RESET << std::endl;
    if(this !=  &other)
    {    
        for(int i = 0; i < 4; i++) {
            _inventary[i] = NULL;
        }
    }
    return *this;
}

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// functions     ////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

std::string const &Character::getName() const{
    return _name;
}

void Character::equip(AMateria* m) 
{
    for (int i = 0; i < 4; i++) {
        if (_inventary[i] == NULL) 
        {
            _inventary[i] = m;
                break;
        }
    }
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4) 
    {
        _inventary[idx] = NULL;
    }
}