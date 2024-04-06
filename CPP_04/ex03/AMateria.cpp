/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:52:36 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/06 11:44:53 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    
}

AMateria::AMateria(std::string const &type){
    _type = type;
}

AMateria::~AMateria(){
    
}

std::string const &AMateria::getType() const{
    return _type;
}