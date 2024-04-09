/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:51:00 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/09 13:05:57 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    protected:
        std::string _name;
        AMateria *_inventary[4];


    public:
        MateriaSource();
        MateriaSource(std::string name);
        ~MateriaSource();
        MateriaSource(const MateriaSource &other); 
        MateriaSource &operator=(const MateriaSource &other);  
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);    
};

#endif