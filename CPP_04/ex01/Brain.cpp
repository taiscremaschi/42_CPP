/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:17:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 11:07:51 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std:: cout << MAGENTA << "this is the constructor of Brain" << RESET << std::endl;
}

Brain::Brain(const Brain &other) {
    std:: cout << MAGENTA << "this is constructed copy Brain" << RESET << std::endl;
    
 }
Brain::~Brain(){
    std:: cout << MAGENTA << "this is desconstructor of Brain" << RESET << std::endl;
    
}

Brain &Brain::operator=(const Brain &other){
    if(this != &other)
        other;
    return *this;
}
