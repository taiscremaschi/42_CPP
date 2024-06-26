/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:33:47 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 17:18:09 by tbolzan-         ###   ########.fr       */
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
#define BOLDYELLOW    "\033[1m\033[33m"

class Animal {
private:
    std::string          _type;
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