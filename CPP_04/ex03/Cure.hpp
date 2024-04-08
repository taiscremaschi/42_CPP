/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:43:41 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 16:37:56 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "library.hpp"



class Cure : public AMateria {
    private:
    

    public:
        Cure();
        ~Cure();
        Cure(const Cure &other); 
        Cure &operator=(const Cure &other);   
        virtual void use(ICharacter& target);
        virtual AMateria* clone() const;
};

#endif 