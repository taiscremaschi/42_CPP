/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:04:03 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 16:18:25 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal{
private:
    Brain *_Brain;

public:
    Dog(); 
    Dog(const Dog &other); 
    ~Dog(); 
    Dog &operator=(const Dog &other);   
    void makeSound() const;
    Brain *getBrain() const;


};


#endif