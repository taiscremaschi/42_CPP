/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:48:10 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 10:48:51 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
    ScavTrap(); // constructwor
    ScavTrap(const std::string name); //constructor with parameter
    ScavTrap(const ScavTrap &other); //copy constructor
    ~ScavTrap(); // destructor
    ScavTrap &operator=(ScavTrap &other); // assignment operator
    void guardGate();
    
};






#endif