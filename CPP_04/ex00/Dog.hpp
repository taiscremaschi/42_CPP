/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:03 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 12:01:39 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
private:

public:
    Dog(); 
    Dog(const Dog &other); 
    ~Dog(); 
    Dog &operator=(const Dog &other);   
    void makeSound() const;

};


#endif