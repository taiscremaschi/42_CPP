/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:48:04 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 10:53:10 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    std:: cout << BLUE << "this is default  constructor of Scav" << RESET << std::endl;
    
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
    
}
