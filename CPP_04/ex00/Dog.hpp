/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:03 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 15:24:26 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog : public Animal{
private:

public:
    Dog(); 
    Dog(const Dog &other); 
    ~Dog(); 
    Dog &operator=(Dog &other);   
};


#endif