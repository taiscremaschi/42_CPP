/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:14:53 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 11:19:35 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std:: cout << GREEN << "this is constructed default" << RESET << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = "no name";  
}

ClapTrap::ClapTrap(const std::string name){
    std:: cout << GREEN << "this is constructed with parameter" << RESET << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _name = name;  
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std:: cout << BLUE << "this is constructed copy" << RESET << std::endl;
    _name = other._name;
    _attackDamage = other._attackDamage;
    _energyPoints = other._energyPoints;
    _hitPoints = other._hitPoints;
}

ClapTrap::~ClapTrap() {
    std:: cout << RED << "this is desconstructed" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    
    std:: cout << BLUE << "this is assigment operator" << RESET << std::endl;
    if(this == &other)
        return *this;
    this->_name = other._name;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    this->_hitPoints = other._hitPoints;
    return *this;
}

void ClapTrap::attack(const std::string &target){
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << RED << "No points to attack" << RESET << std::endl;
    }
    else 
    {
        std::cout << MAGENTA << "ClapTrap " << _name  << " attacks " << target << " , causing " << _attackDamage  << " points of damage!" << std::endl;
        _energyPoints -= 1;
    }
    
}

void ClapTrap::takeDamage(unsigned int amount){
    
    if(_hitPoints == 0)
        std::cout << RED << _name << " is already dead" << RESET << std::endl;
    else {
        std::cout << GREEN << "ClapTrap " << _name  << " receives damage " << amount << std::endl;
        if(_hitPoints < amount)
        {
            std::cout << RED << _name << " died" << RESET << std::endl;
            _hitPoints = 0;
        }
        else 
            _hitPoints -= amount;    
    }
}

void ClapTrap::beRepaired(unsigned int amount){

    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << RED << "No points to repair" << RESET << std::endl;
    }
    else 
    {
        std::cout << MAGENTA << "ClapTrap " << _name  << " repair " << amount << std::endl;
        _energyPoints -= 1;
        _hitPoints += amount;
    }
    
}

void ClapTrap::setName(std::string name)
{
     _name = name;    
}
std::string ClapTrap::getName(){
    return _name;
}


void ClapTrap::setHitPoints(unsigned int n)
{
     _hitPoints = n;    
}

unsigned int ClapTrap::getHitPoints(){
    return _hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int n)
{
     _energyPoints = n;    
}

unsigned int ClapTrap::getEnergyPoints(){
    return _energyPoints;
}


void ClapTrap::setAttackDamage(unsigned int n)
{
     _attackDamage = n;    
}

unsigned int ClapTrap::getAttackDamage(){
    return _attackDamage;
}

