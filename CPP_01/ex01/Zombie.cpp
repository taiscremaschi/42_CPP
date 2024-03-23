/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:05:00 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/23 14:19:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << _name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string name){
    _name = name;
}

std::string Zombie::getName(){
    return _name;
}

void Zombie::announce(){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


