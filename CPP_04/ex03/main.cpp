/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:49:55 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/18 20:29:44 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"


int	main(void)
{
 	std:: cout << BOLDYELLOW << "-----------------\nCREATE OBJECT 1 msource\n -----------------" << RESET << std::endl;
	IMateriaSource	*obj1 = new MateriaSource();
	
 	std:: cout << BOLDYELLOW << "-----------------\nTRIED OBJECT INVALID\n -----------------" << RESET << std::endl;
	AMateria		*invalid = NULL;
	obj1->learnMateria(invalid);
	
 	std:: cout << BOLDYELLOW << "-----------------\nCREATE POWERS FOR msource\n -----------------" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
		if (i < 2) {
 			std:: cout << ORANGE << "-----------------\n create ice \n -----------------" << RESET << std::endl;
			obj1->learnMateria(new Ice());
		}
		else {
 			std:: cout << ORANGE << "-----------------\n create cure \n -----------------" << RESET << std::endl;
			obj1->learnMateria(new Cure());
		}
	
 	std:: cout << BOLDYELLOW << "-----------------\nCREATE COPY OBJECT msource \n -----------------" << RESET << std::endl;
	IMateriaSource	*obj2 = new MateriaSource(*(MateriaSource *)obj1);
	
 	std:: cout << BOLDYELLOW << "-----------------\nCREATE  CHARACTER tata\n -----------------" << RESET << std::endl;
	ICharacter		*tata = new Character("tata");
	
 	std:: cout << BOLDYELLOW << "-----------------\n EQUIPED tata WITH POWER INVALID\n -----------------" << RESET << std::endl;
	tata->equip(obj2->createMateria("flower"));
 	std:: cout << BOLDYELLOW << "-----------------\n EQUIPED tata WITH MATERIAS POWERS\n -----------------" << RESET << std::endl;
	tata->equip(obj2->createMateria("ice"));
	tata->equip(obj2->createMateria("cure"));
	tata->equip(obj2->createMateria("ice"));
	tata->equip(obj2->createMateria("cure"));
	tata->equip(obj2->createMateria("cure"));

	
 	std:: cout << BOLDYELLOW << "-----------------\nCREATE  CHARACTER MINGAU\n -----------------" << RESET << std::endl;
	ICharacter		*mingau = new Character("mingau");
 	std:: cout << BOLDYELLOW << "-----------------\nCREATE  CHARACTER COPY JUJUBA \n -----------------" << RESET << std::endl;
	ICharacter		*jujuba = new Character(*(Character *)tata);
	
	std::cout << BOLDYELLOW << "USE POWER 0:" << RESET << std::endl;
	jujuba->use(0, *mingau);
	std::cout << BOLDYELLOW << "USE POWER 1:" << RESET << std::endl;
	jujuba->use(1, *mingau);
	std::cout << BOLDYELLOW << "USE POWER 2:" << RESET << std::endl;
	jujuba->use(2, *mingau);
	std::cout << BOLDYELLOW << "USE POWER 3:" << RESET << std::endl;
	jujuba->use(3, *mingau);
	std::cout << BOLDYELLOW << "USE POWER 4, invalid:" << RESET << std::endl;
	jujuba->use(4, *mingau);
	std::cout << std::endl;

 	std:: cout << BOLDYELLOW << "-----------------\n  DELETE OBJ1 \n -----------------" << RESET << std::endl;	
	delete obj1;
 	std:: cout << BOLDYELLOW << "-----------------\n  DELETE  OBJ2  \n -----------------" << RESET << std::endl;	
	delete obj2;
 	std:: cout << BOLDYELLOW << "-----------------\n  DELETE  tata \n -----------------" << RESET << std::endl;	
	delete tata;
 	std:: cout << BOLDYELLOW << "-----------------\n  DELETE MINGAU \n -----------------" << RESET << std::endl;	
	delete mingau;
 	std:: cout << BOLDYELLOW << "-----------------\n  DELETE JUJUBA \n -----------------" << RESET << std::endl;	
	delete jujuba;

	return (0);
}

