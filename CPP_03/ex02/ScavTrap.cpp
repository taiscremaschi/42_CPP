/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:48:04 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 11:20:12 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    std:: cout << BLUE << "this is default  constructor of Scav" << RESET << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    setName("no name scav");
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
    std:: cout << BLUE << "this is constructed with parameter Scav" << RESET << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    setName(name);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std:: cout << GREEN << "this is constructed copy Scav" << RESET << std::endl; 
}

ScavTrap::~ScavTrap() {
    std:: cout << RED << "this is desconstructor scav" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if(this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::guardGate(){
    std::cout <<  MAGENTA << getName() << " now in Gate keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target){
    unsigned int n = getEnergyPoints();
    if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
    {
        std::cout << RED << "ScavTrap dont have points to attack" << RESET << std::endl;
    }
    else 
    {
        std::cout << MAGENTA << "ScavTrap " << getName()  << " attacks " << target << " , causing " << getAttackDamage()  << " points of damage!" << std::endl;
        
        n -= 1;
        setEnergyPoints(n);
    }
}
