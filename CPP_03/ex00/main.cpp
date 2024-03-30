/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:14:50 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/30 19:31:03 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap tata("tata");
    ClapTrap tatazinha("tatazinha");

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