/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:40 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 10:51:29 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon _weaponB;
        std::string _nameB;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon weapon);
};

HumanB::HumanB(){
    
}

HumanB::~HumanB(){
    
}

void HumanB::attack()
{
    std::cout << _nameB << " attacks with their " <<  _weaponB.getType() << std::endl;
}

HumanB::HumanB(std::string name){
    _nameB = name;
    
}

void HumanB::setWeapon(Weapon weapon)
{
    _weaponB = weapon;
}