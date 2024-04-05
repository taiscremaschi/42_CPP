/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:32:21 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 17:33:52 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout <<  BOLDYELLOW << "--------------------- inicialize test of subject -----------------------" <<  RESET << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    std::cout <<  BOLDYELLOW << "\n--------------------- next test  ---------------------------------------\n" <<  RESET << std::endl;

    const Animal *animal[6];

    for(int i = 0; i < 6; i++){
        if(i < 3)
        {
            std::cout << BOLDYELLOW << "----------------- create dog ------------------------------------" <<  RESET << std::endl;
            animal[i] = new Dog();
            
        }
        else
        {
            std::cout << BOLDYELLOW << "----------------- create cat ------------------------------------" <<  RESET << std::endl;
            animal[i] = new Cat();
        }
    }

    for (int i = 0; i < 6; i++){
        std::cout << BOLDYELLOW << "--------------------- delete class animal --------------------------" <<  RESET << std::endl;
        delete animal[i];
        
    }

    std::cout <<  BOLDYELLOW << "\n-------------------- test of copies  ---------------------------------------\n" <<  RESET << std::endl;
    Cat x;
    
    Cat y(x);
    std::string *ideas;
    x.getBrain()->setIdeas("I want ice cream today!!");
    ideas = x.getBrain()->getIdeas();
    
    for(int i=0; i<2; i++)
        std::cout << "ideas: " << ideas[i] << std::endl;
    ideas = y.getBrain()->getIdeas();
    for(int i=0; i<2; i++)
        std::cout << "ideas: " << ideas[i] << std::endl;
	
    return (0);
}