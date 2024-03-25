/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:48 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 09:32:08 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
  
}

Weapon::~Weapon(){
  
}

const std::string &Weapon::getType(){
    return _type;    
}

void Weapon::setType(std::string type) {
  _type = type;
}