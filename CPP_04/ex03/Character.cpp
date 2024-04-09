/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:59:46 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 12:56:03 by tbolzan-         ###   ########.fr       */
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
        std::cout << i << " passou\n";
        if(_inventary[i] != NULL)
            delete _inventary[i];
        else 
            std::cout << "entrou no else\n";
    }
    while(x < _ii)
    {
        std::cout << x << " "<< _adress[x] << " passou\n";
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
            std::cout << "Equipou no indice " << i << std::endl;
            _inventary[i] = m->clone();
            return;
        }
    }
    std::cout << "error in equip: no slots available" << std::endl;
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4) {
        _adress[_ii] = _inventary[idx];
        _inventary[idx] = NULL;
        _ii++;
        _adress[_ii] = NULL; 
    }
}

void Character::use(int idx, ICharacter& target){
    if(idx < 0 || idx > 3 || _inventary[idx] == NULL ){
        std::cout << "error: invalid index" << std::endl;
        return;
    }
    _inventary[idx]->use(target);    
}
