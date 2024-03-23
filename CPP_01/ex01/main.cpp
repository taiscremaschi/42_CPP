/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:17:02 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/23 15:28:43 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( std::string name)
{
    Zombie *zombie = new Zombie(name);

   return zombie;

}

Zombie *zombieHorde( int n, std::string name )
{
    int flag = n;
    Zombie *firstzombie = NULL;
    
    while(n > 0)
    {
        if(n == flag)
        {
            Zombie *zombie = new Zombie(name);
            firstzombie = zombie;
            zombie->announce();
        }
        else
        {
            
        Zombie *zombie = new Zombie(name);
        zombie->announce();
        }
        n--;  
    }
    return firstzombie;
}

 Zombie *zombieHorde( int n, std::string name )
 {
    Zombie *zombies = new Zombie[n];
    
    
 }

int  main()
{
    zombieHorde(10, "tatas");
}