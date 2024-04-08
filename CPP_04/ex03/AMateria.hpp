/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:52:38 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 16:19:16 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "library.hpp"


class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        ~AMateria();
        AMateria(const AMateria &other); 
        AMateria &operator=(const AMateria &other);   
        std::string const &getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif