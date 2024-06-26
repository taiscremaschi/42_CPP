/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:14:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 17:57:43 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 
#define ORANGE    "\033[38;5;208m"

class ClapTrap {
private:
    std::string _name;
    unsigned int         _hitPoints;
    unsigned int         _energyPoints;
    unsigned int         _attackDamage;

public:
    ClapTrap(); // constructor
    ClapTrap(const std::string name); //constructor with parameter
    ClapTrap(const ClapTrap &other); //copy constructor
    ~ClapTrap(); // destructor
    ClapTrap &operator=(const ClapTrap &other); // assignment operator
    void setName(std::string name);
    std::string getName();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};








#endif