/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:33 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 11:46:46 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon &_weaponA;
        std::string _nameA;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();  
};





