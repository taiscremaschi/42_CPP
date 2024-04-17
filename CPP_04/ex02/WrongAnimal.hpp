/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:54:06 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/17 09:37:49 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 

class WrongAnimal {
private:
    std::string   _type;
public:
    WrongAnimal(); 
    WrongAnimal(const std::string type);  
    WrongAnimal(const WrongAnimal &other); 
    ~WrongAnimal(); 
    WrongAnimal &operator=(const WrongAnimal &other);   
    std::string getType() const;
    void makeSound() const;
};



#endif