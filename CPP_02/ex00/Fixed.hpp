/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:32:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/07 21:58:32 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
 
#include <iostream>


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

class Fixed {
    private:
        int _nbr;
        const static int _fract = 8;
    public:
        Fixed(); // constructor
        Fixed(const Fixed &other); //copy constructor
        ~Fixed(); // destructor
        Fixed &operator=(const Fixed &other); // assignment operator
        int getRawBits() const;
        void setRawBits(int const nbr);

};

#endif