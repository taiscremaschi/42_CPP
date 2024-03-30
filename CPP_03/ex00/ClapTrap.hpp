/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:14:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/30 17:52:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

class ClapTrap {
private:
    std::string _name;
    unsigned int         _hitPoints;
    unsigned int         _energyPoints;
    unsigned int         _attackDamage;

public:
    ClapTrap(const std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& other);
    void setName(std::string name);
    std::string getName();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};







#endif