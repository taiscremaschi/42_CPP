/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:14:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/30 12:29:52 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
private:
std::string _name;
unsigned int         _hitPoints;
unsigned int         _energyPoints;
unsigned int         _attackDamage;

public:
ClapTrap(std::string name);
~ClapTrap();
void attack(const std::string &target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);   
};









#endif