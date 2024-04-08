/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:32:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 11:47:28 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed(): _nbr(0) {
    
    std:: cout << GREEN << "this is constructed default" << RESET << std::endl;
  
}

Fixed::Fixed(const int nbr) {
    _nbr = nbr << _fract; 
    std:: cout << GREEN << "this is constructor with paramenter int" << RESET << std::endl;

}

Fixed::Fixed(const float floatNbr) {
    //_nbr =  static_cast<int>(floatNbr * (1 << _fract));
    _nbr = static_cast<int>(roundf(floatNbr * (1 << _fract)));
    std:: cout << GREEN << "this is constructor with paramenter float " << RESET << std::endl;
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
    _nbr = other._nbr;
    return *this;
}


float Fixed::toFloat() const{
    return (static_cast<float>(_nbr) / (1 << _fract));
}

int Fixed::toInt() const {
    return(_nbr >> _fract);
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _nbr;
    
}


void Fixed::setRawBits(int const nbr){
    std::cout << "setRawBits member function called" << std::endl;
    _nbr = nbr;
}

std::ostream& operator<<(std::ostream& os, const Fixed &fixed){
    os << fixed.toFloat();
    return os;
}