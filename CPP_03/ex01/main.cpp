/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:47:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 12:38:38 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap tata("tata");
    ScavTrap no_name;

    tata.attack("tatazinha");
    tata.takeDamage(20);
    tata.beRepaired(20);
    tata.guardGate();
    tata.takeDamage(100);
    tata.takeDamage(20);
    tata.attack("tatazinha");

    no_name.attack("tata");
    no_name.takeDamage(200);
    no_name.beRepaired(5);
}

