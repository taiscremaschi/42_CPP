/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:03:32 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 14:54:20 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain *_Brain;

public:
    Cat(); 
    Cat(const Cat &other); 
    ~Cat(); 
    Cat &operator=(const Cat &other);   
    void makeSound() const;
    Brain *getBrain() const;

};


#endif