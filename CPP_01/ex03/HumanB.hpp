/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:40 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 09:55:25 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class HumanB{
    private:
        std::string _weaponB;
        std::string _nameB;
    public:
        HumanB();
        ~HumanB();
        void attack();
};

HumanB::HumanB(){
    
}

HumanB::~HumanB(){
    
}

void HumanB::attack()
{
    std::cout << _nameB << " attacks with their " <<  _weaponB << std::endl;
}