/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:32:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/07 21:56:08 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(): _nbr(0) {
    
    std:: cout << GREEN << "this is constructed default" << RESET << std::endl;
  
}

Fixed::Fixed(const Fixed &other)
{
    std:: cout << BLUE << "this is constructed copy" << RESET << std::endl;
    _nbr = other._nbr;
}

Fixed::~Fixed() {
    std:: cout << RED << "this is desconstructed" << RESET << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other){
    
    std:: cout << BLUE << "this is assigment operator" << RESET << std::endl;
    if(this == &other)
        return *this;
    _nbr = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _nbr;
    
}


void Fixed::setRawBits(int const nbr){
    std::cout << "setRawBits member function called" << std::endl;
    _nbr = nbr;
}