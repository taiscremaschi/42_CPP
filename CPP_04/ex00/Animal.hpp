/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:33:47 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 14:36:00 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 
#define ORANGE    "\033[38;5;208m"

class Animal {
protected:
    std::string    _type;
public:
    Animal(); 
    Animal(const std::string type);  
    Animal(const Animal &other); 
    virtual ~Animal(); 
    Animal &operator=(const Animal &other);   
    std::string getType() const;
    virtual void makeSound() const;
};

#endif