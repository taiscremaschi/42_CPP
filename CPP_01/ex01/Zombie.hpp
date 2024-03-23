/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:03:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/23 18:42:45 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    std::string getName();
    void announce();
    void setName(std::string name);

};

#endif