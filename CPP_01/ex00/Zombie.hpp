/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:03:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 12:45:04 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

};

Zombie *newZombie( std::string name);
void randomChump(std::string name);

#endif