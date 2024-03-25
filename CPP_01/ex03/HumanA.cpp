/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:31 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 11:47:05 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weaponA(weapon), _nameA(name) {}

HumanA::~HumanA(){
    
}

void HumanA::attack()
{
    std::cout << _nameA << " attacks with their " <<  _weaponA.getType() << std::endl;
}
