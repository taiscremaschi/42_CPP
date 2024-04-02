/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:03:32 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 15:38:08 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal{
private:

public:
    Cat(); 
    Cat(const Cat &other); 
    ~Cat(); 
    Cat &operator=(Cat &other);   
    void makeSound() const;
};


#endif