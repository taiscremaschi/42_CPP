/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:50 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 12:46:23 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
  private:
    std::string _type;
  public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType();
    void  setType(const std::string &type);
};



#endif
