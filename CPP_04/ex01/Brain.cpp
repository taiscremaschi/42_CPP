/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:17:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 12:02:56 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std:: cout << MAGENTA << "this is the constructor of Brain" << RESET << std::endl;
}

Brain::Brain(const Brain &other) {
    std:: cout << MAGENTA << "this is constructed copy Brain" << RESET << std::endl;
    for(int i = 0; i < 100 ; i++) {
        _ideas[i] =  other._ideas[i];
    }
 }
Brain::~Brain(){
    std:: cout << MAGENTA << "this is desconstructor of Brain" << RESET << std::endl;
    
}

Brain &Brain::operator=(const Brain &other){
    if(this == &other)
            return *this;
    for(int i = 0; i < 100 ; i++) {
        this->_ideas[i] = other._ideas[i];
    }
    return *this;
}
