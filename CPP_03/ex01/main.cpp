/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:47:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 12:20:51 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap tata;
    ScavTrap tatazinha("tatazinha");

    tata.attack("tatazinha");
    tata.takeDamage(9);
    tata.beRepaired(2);
    tata.takeDamage(20);
    tatazinha.attack("tata");
    tatazinha.takeDamage(20);
    tatazinha.beRepaired(2);
    tatazinha.takeDamage(20);
    tatazinha.attack("tata");
}

