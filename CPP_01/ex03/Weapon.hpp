/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:41:50 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 09:41:50 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon{
  private:
    std::string _type;
  public:
    Weapon();
    ~Weapon();
    const std::string &getType();
    void  setType(const std::string);
};

#endif
