/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:17:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 22:46:14 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std:: cout << RED << "this is the constructor of Brain" << RESET << std::endl;
    setIdeas("");
}

Brain::Brain(const Brain &other) {
    std:: cout << RED << "this is constructed copy Brain" << RESET << std::endl;
    for(int i = 0; i < 100 ; i++) {
        _ideas[i] =  other._ideas[i];
    }
 }
Brain::~Brain(){
    std:: cout << RED << "this is destructor of Brain" << RESET << std::endl;
    
}

Brain &Brain::operator=(const Brain &other){
    std:: cout << RED << "this is operator of Brain" << RESET << std::endl;
    if(this == &other)
            return *this;
    for(int i = 0; i < 100 ; i++) {
        this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

std::string	*Brain::getIdeas() {
	return (_ideas);
}

void	Brain::setIdeas(std::string s) {
    if (s.empty())
    {
        s = "A snack is always a good idea!!";
    }
	for(int i = 0; i < 100; i++)
        _ideas[i] = s;
}