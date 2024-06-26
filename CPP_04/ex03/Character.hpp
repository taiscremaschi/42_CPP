/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:59:48 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 10:09:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        std::string _name;
        AMateria *_inventary[4];
        AMateria *_adress[100];
        int _ii;
        
    public:
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character &other); 
        Character &operator=(const Character &other);   
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif