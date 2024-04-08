/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:32:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/08 14:32:17 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////// canonical form////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

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
    if(this !=  &other)
        _nbr = other.getRawBits();
    return *this;
}
////////////////////////////////////////////////////////////////////////////////////

///////////////////////// constructor with parameters //////////////////////////////

///////////////////////////////////////////////////////////////////////////////////


Fixed::Fixed(const int nbr) {
    _nbr = nbr << _fract; 
    std:: cout << GREEN << "this is constructor with paramenter int" << RESET << std::endl;

}

Fixed::Fixed(const float floatNbr) {
    _nbr = static_cast<int>(roundf(floatNbr * (1 << _fract)));
    std:: cout << GREEN << "this is constructor with paramenter float " << RESET << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////     to's     //////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////


float Fixed::toFloat() const{
    return (static_cast<float>(_nbr) / (1 << _fract));
}

int Fixed::toInt() const {
    return(_nbr >> _fract);
}

///////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////  gets and sets  /////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////


int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _nbr;
    
}

void Fixed::setRawBits(int const nbr){
    std::cout << "setRawBits member function called" << std::endl;
    _nbr = nbr;
}

///////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////  operators > < >=  ==  != and <=  ///////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////

bool Fixed::operator>(const Fixed& other) const {
        return _nbr > other._nbr;
}

bool Fixed::operator<(const Fixed& other) const {
        return _nbr < other._nbr;
}

bool Fixed::operator>=(const Fixed& other) const {
        return _nbr >= other._nbr;
}

bool Fixed::operator<=(const Fixed& other) const {
        return _nbr <= other._nbr;
}

bool Fixed::operator==(const Fixed& other) const {
        return _nbr == other._nbr;
}

bool Fixed::operator!=(const Fixed& other) const {
        return _nbr != other._nbr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////  operators  + - / *  /////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////

Fixed Fixed::operator+(const Fixed &other) const{
    return Fixed(_nbr + other._nbr);
}

Fixed Fixed::operator-(const Fixed &other) const{
    return Fixed(_nbr - other._nbr); 
}

Fixed Fixed::operator/(const Fixed &other) const{
    return Fixed((_nbr << _fract) / other._nbr);; 
}

// Fixed Fixed::operator*(const Fixed &other) const{
//     return Fixed((_nbr * other._nbr) >> _fract); 
// }

Fixed Fixed::operator*(const Fixed &other) const {
    float result = static_cast<float>(_nbr) / (1 << _fract) * static_cast<float>(other._nbr) / (1 << _fract);
    return Fixed(result);
}

///////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////  gets and sets  /////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////

Fixed &Fixed::operator++() { 
        _nbr += (1 << _fract);
        return *this;
}

Fixed Fixed::operator++(int) { 
        Fixed temp = *this;
        ++(*this);
        return temp;
}

Fixed &Fixed::operator--() { 
        _nbr -= (1 << _fract);
        return *this;
}

Fixed Fixed::operator--(int) { 
        Fixed temp = *this;
        --(*this);
        return temp;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////  operator out class  /////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////


std::ostream& operator<<(std::ostream& os, const Fixed &fixed){
    os << fixed.toFloat();
    return os;
}
///////////////////////////////////////////////////////////////////////////////////////////////////