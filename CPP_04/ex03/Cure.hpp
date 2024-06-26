/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:43:41 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 12:01:17 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "library.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    private:
    

    public:
        Cure();
        ~Cure();
        Cure(const Cure &other); 
        Cure &operator=(const Cure &other);   
        void use(ICharacter& target);
        AMateria* clone() const;
};

#endif 