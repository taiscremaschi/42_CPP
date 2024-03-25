/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:33 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 10:35:43 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string _weaponA;
        std::string _nameA;
    public:
        HumanA();
        ~HumanA();
        HumanA(std::string name, Weapon weapon);
        void attack();
        
};

HumanA::HumanA(){
    
}

HumanA::~HumanA(){
    
}

void HumanA::attack()
{
    std::cout << _nameA << " attacks with their " <<  _weaponA << std::endl;
}

HumanA::HumanA(std::string name, Weapon weapon){
    _nameA = name;
    _weaponA = weapon.getType();
}

