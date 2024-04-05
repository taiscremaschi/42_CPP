/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:17:02 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/03 13:43:09 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int n, std::string name )
{
    Zombie *zombies = new Zombie[n];

    for (int i = 0; i < n; i++)
        zombies[i].setName(name);

    return zombies;
}

int  main()
{
    Zombie *horde;
    int n = 10; 
    
    horde = zombieHorde(n, "ronaldo");
    while(n > 0)
    {
        horde->announce();
        n--;
    }
    delete[] horde;
}