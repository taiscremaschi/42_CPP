/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:32:21 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 19:50:42 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *animal[6];

    for(int i = 0; i < 6; i++){
        if(i < 3)
        {
            std:: cout << BOLDYELLOW << "-----------------\nCREATE OBJECT DOG\n -----------------" << RESET << std::endl;
            animal[i] = new Dog();
            
        }
        else
        {
            std:: cout << BOLDYELLOW << "-----------------\nCREATE OBJECT CAT\n -----------------" << RESET << std::endl;
            animal[i] = new Cat();
        }
    }

    for (int i = 0; i < 6; i++){
        std:: cout << BOLDYELLOW << "-----------------\nDELETED OBJECT MIAU\n -----------------" << RESET << std::endl;
        delete animal[i];
    }
    std:: cout << BOLDYELLOW << "--------------------------------------------------------------" << RESET << std::endl;
    std:: cout << BOLDYELLOW << "-----------------\nTESTS OF COPIES!!!!\n -----------------" << RESET << std::endl;
    std:: cout << BOLDYELLOW << "--------------------------------------------------------------" << RESET << std::endl;
    
    std:: cout << BOLDYELLOW << "-----------------\nCREATE OBJECT MINGAU\n -----------------" << RESET << std::endl;
    Cat mingau;
    
    std:: cout << BOLDYELLOW << "-----------------\nCREATE COPY MINGAU (MILK)\n -----------------" << RESET << std::endl;
    Cat milk(mingau);
    
    std::string *ideas;
    
    std:: cout << BOLDYELLOW << "-----------------\nIDEAS OF MINGAU!!!\n -----------------" << RESET << std::endl;
    mingau.getBrain()->setIdeas("I want fish today!!");
    ideas = mingau.getBrain()->getIdeas();
    for(int i=0; i<2; i++)
        std::cout << "ideas of mingau: " << ideas[i] << std::endl;
    
    std:: cout << BOLDYELLOW << "-----------------\nIDEAS OF MILK!!!\n -----------------" << RESET << std::endl;
    ideas = milk.getBrain()->getIdeas();
    for(int i=0; i<2; i++)
        std::cout << "ideas: " << ideas[i] << std::endl;
        
    std:: cout << BOLDYELLOW << "-----------------\nDESTRUCTORS\n -----------------" << RESET << std::endl;
    	
    return (0);
}