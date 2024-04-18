/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:59:46 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 20:20:03 by tbolzan-         ###   ########.fr       */
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
    _ii = 0;   
}

Character::Character(std::string name) {
    std:: cout << GREEN << "this is constructed of Character" << RESET << std::endl;
    _name = name;
        
    for(int i = 0; i < 4; i++) {
        _inventary[i] = NULL;
    }   
    _ii = 0;   

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
    _ii = other._ii;   

}

Character::~Character() {
    int x = 0;
    
    std:: cout << RED << "this is desconstructed character" << RESET << std::endl;
    
    for(int i = 0; i < 4; i++) {
        if(_inventary[i] != NULL)
            delete _inventary[i];
    }
    while(x < _ii)
    {
        delete _adress[x];
        x++;
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
        _ii = other._ii;   
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
    if (m == 0)
	{
		std::cout << "Tried to equip invalid materia" << std::endl;
		return;
	}
    for (int i = 0; i < 4; i++) {
        if (_inventary[i] == NULL) 
        {
            _inventary[i] = m->clone();
            std::cout << _name << " equiped " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "error in equip: no slots available" << std::endl;
}

void Character::unequip(int idx) 
{
    if(_ii > 99){
        std::cout << _name << " unequip full :(" << std::endl;
        return;
    }
    if (idx >= 0 && idx < 4) {
        _adress[_ii] = _inventary[idx];
        _inventary[idx] = NULL;
        _ii++;
        _adress[_ii] = NULL; 
        std::cout << _name << " unequiped " << std::endl;
    }
    else 
        std::cout << _name << " error in unequiped " << std::endl;
}

void Character::use(int idx, ICharacter& target){
    if(idx < 0 || idx > 3 || _inventary[idx] == NULL ){
        std::cout << "error: invalid index" << std::endl;
        return;
    }
    _inventary[idx]->use(target);    
}
