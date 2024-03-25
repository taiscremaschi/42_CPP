/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:40 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 11:42:02 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *_weaponB;
        std::string _nameB;
    public:
        HumanB(std::string name);
        HumanB();
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
};


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