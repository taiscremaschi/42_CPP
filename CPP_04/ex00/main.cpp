/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:32:21 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 19:47:29 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    std:: cout << ORANGE << "-----------------\nCREATE OBJECT ANIMAL\n -----------------" << RESET << std::endl;
    const Animal* undefined = new Animal();
    std:: cout << ORANGE << "-----------------\nCREATE OBJECT WOLF\n -----------------" << RESET << std::endl;
    const Animal* Wolf = new Dog();
    std:: cout << ORANGE << "-----------------\nCREATE OBJECT MINGAU\n -----------------" << RESET << std::endl;
    const Animal* Mingau = new Cat();
    std:: cout << ORANGE << "-----------------\nCREATE OBJECT WRONG\n -----------------" << RESET << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    std:: cout << ORANGE << "-----------------\nCREATE OBJECT NO CAT\n -----------------" << RESET << std::endl;
    const WrongAnimal* nocat = new WrongCat();
    std:: cout << ORANGE << "-----------------\nCREATE OBJECT MIAU \n -----------------" << RESET << std::endl;
    const WrongCat *miau = new WrongCat();
    
    
    std:: cout << ORANGE << "-----------------\nSOUND CALLED ANIMAL\n -----------------" << RESET << std::endl;
    undefined->makeSound();
    
    std:: cout << ORANGE << "-----------------\nSOUND CALLED WOLF \n -----------------" << RESET << std::endl;
    std::cout << Wolf->getType() << " " << std::endl;
    Wolf->makeSound();

    std:: cout << ORANGE << "-----------------\nSOUND CALLED MINGAU \n -----------------" << RESET << std::endl;
    std::cout << Mingau->getType() << " " << std::endl;
    Mingau->makeSound();

    std:: cout << ORANGE << "-----------------\nSOUND CALLED WRONG \n -----------------" << RESET << std::endl;
    wrong->makeSound();

    std:: cout << ORANGE << "-----------------\nSOUND CALLED NO CAT \n -----------------" << RESET << std::endl;
    std::cout << nocat->getType() << " " << std::endl;
    nocat->makeSound();
    std:: cout << ORANGE << "-----------------\nSOUND CALLED MIAU \n -----------------" << RESET << std::endl;
    std::cout << miau->getType() << " " << std::endl;
    miau->makeSound();
    
    std:: cout << ORANGE << "-----------------\nDELETED OBJECT ANIMAL\n -----------------" << RESET << std::endl;
    delete undefined;            
    std:: cout << ORANGE << "-----------------\nDELETED OBJECT MINGAU\n -----------------" << RESET << std::endl;
    delete Mingau;
    std:: cout << ORANGE << "-----------------\nDELETED OBJECT WOLF\n -----------------" << RESET << std::endl;
    delete Wolf;
    std:: cout << ORANGE << "-----------------\nDELETED OBJECT WRONG\n -----------------" << RESET << std::endl;
    delete wrong;
    std:: cout << ORANGE << "-----------------\nDELETED OBJECT NO CAT\n -----------------" << RESET << std::endl;
    delete nocat;
    std:: cout << ORANGE << "-----------------\nDELETED OBJECT MIAU\n -----------------" << RESET << std::endl;
    delete miau;
    
    std::cout  << ORANGE << "-----------------\nDEEPS COPIES TESTER\n -----------------" << RESET << std::endl;
    const Animal* exampledog = new Dog();
    const Animal* deepCopyDog = new Dog(*(Dog*)(exampledog));
    std::cout << ORANGE << "Memory address of exampledog: " << exampledog << std::endl;
    std::cout << ORANGE << "Memory address of deepCopyDog: " << deepCopyDog << std::endl;
    Animal* exampleCat = new Cat();
	Animal *deepCopyCat = new Cat();
    *deepCopyCat = *exampleCat;

    std::cout <<  ORANGE << "Memory address of exampleCat: " << exampleCat << std::endl;
    std::cout << ORANGE << "Memory address of deepCopyCat: " << deepCopyCat << std::endl;
    
    delete exampleCat;
    delete deepCopyCat;
    delete deepCopyDog;
    delete exampledog;


}