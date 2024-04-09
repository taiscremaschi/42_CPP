/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:59:46 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 12:26:48 by tbolzan-         ###   ########.fr       */
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
    std:: cout << GREEN << "this is constructed of Character" << RESET << std::endl;
    _name = name;
        
    for(int i = 0; i < 4; i++) {
        _inventary[i] = NULL;
    }   
}


Character::Character(const Character &other)
{
    std:: cout << BLUE << "this is constructed copy of Character" << RESET << std::endl;

    for (int i = 0; i < 4; i++) 
    {
        if (other._inventary[i] != NULL) 
            _inventary[i] = other._inventary[i]->clone();
        else
            _inventary[i] = NULL;
    }
}

Character::~Character() {
    std:: cout << RED << "this is desconstructed character" << RESET << std::endl;
    
    for(int i = 0; i < 4; i++) {
        std::cout << i << "passou\n";
        if(_inventary[i] != NULL)
            delete _inventary[i];
     }
}

Character &Character::operator=(const Character &other){
    
    std:: cout << BLUE << "this is assigment operator of Character" << RESET << std::endl;
    if(this !=  &other)
    {    
        for(int i = 0; i < 4; i++) {
            if(_inventary[i] != NULL)
                delete _inventary[i];
        }
        _name = other._name;
        for(int i = 0; i < 4; i++) {
            _inventary[i] = other._inventary[i]->clone();
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
                return;
        }
    }
    std::cout << "error in equip: no slots available" << std::endl;
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4) 
        _inventary[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if(idx < 0 || idx > 3 || _inventary[idx] == NULL ){
        std::cout << "error: invalid index" << std::endl;
        return;
    }
    _inventary[idx]->use(target);    
}
