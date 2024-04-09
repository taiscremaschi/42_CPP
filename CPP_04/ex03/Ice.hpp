/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:18:06 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 17:04:13 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "library.hpp"



class Ice : public AMateria {
    private:
    

    public:
        Ice();
        ~Ice();
        Ice(const Ice &other); 
        Ice &operator=(const Ice &other);   
        void use(ICharacter& target);
        AMateria* clone() const;
};

#endif 