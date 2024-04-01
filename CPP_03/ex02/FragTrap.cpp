/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:39:53 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 12:59:18 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
    std:: cout << BLUE << "this is default  constructor of Frag" << RESET << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    setName("no name Frag");
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
    std:: cout << BLUE << "this is constructed with parameter Frag" << RESET << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    setName(name);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std:: cout << GREEN << "this is constructed copy Frag" << RESET << std::endl; 
}

FragTrap::~FragTrap() {
    std:: cout << RED << "this is desconstructor Frag" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &other) {
    if(this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void FragTrap::attack(const std::string &target){
    unsigned int n = getEnergyPoints();
    if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
    {
        std::cout << RED << "FragTrap dont have points to attack" << RESET << std::endl;
    }
    else 
    {
        std::cout << MAGENTA << "FragTrap " << getName()  << " attacks " << target << " , causing " << getAttackDamage()  << " points of damage!" << std::endl;
        
        n -= 1;
        setEnergyPoints(n);
    }
}