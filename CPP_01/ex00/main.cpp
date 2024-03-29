/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:05:28 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/23 14:10:58 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("tataHeap");
    zombie->announce();
    delete zombie;
    randomChump("tataStack");
    randomChump("tata");
}