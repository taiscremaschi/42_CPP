/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:48:10 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 12:49:17 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
    ScavTrap(); // constructor
    ScavTrap(const std::string name); //constructor with parameter
    ScavTrap(const ScavTrap &other); //copy constructor
    ~ScavTrap(); // destructor
    ScavTrap &operator=(ScavTrap &other); // assignment operator
    void guardGate();
    void attack(const std::string &target);
};






#endif