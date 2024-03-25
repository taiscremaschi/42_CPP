/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:37 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 11:46:19 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    _nameB = name;
    
}

HumanB::~HumanB(){
    
}

void HumanB::attack()
{
    std::cout << _nameB << " attacks with their " <<  _weaponB->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    _weaponB = &weapon;
}