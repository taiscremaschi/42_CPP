/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:49:55 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/17 15:04:46 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"



// int main()

// {
//     std:: cout << BOLDYELLOW << "-----------------\nCREATE OBJECT DOG\n -----------------" << RESET << std::endl;

//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure"); 
//     me->equip(tmp);
//     me->equip(tmp);
//     me->equip(tmp);
//     me->unequip(3);

//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;

	
// }


int	main(void)
{
	IMateriaSource	*src1 = new MateriaSource();
	AMateria		*test = NULL;
	src1->learnMateria(test);
	for (int i = 0; i < 6; i++)
		if (i % 2 == 0)
			src1->learnMateria(new Ice());
		else
			src1->learnMateria(new Cure());

	IMateriaSource	*src2 = new MateriaSource(*(MateriaSource *)src1);
	ICharacter		*vessel = new Character("Noelle");
	vessel->equip(src2->createMateria("ice"));
	vessel->equip(src2->createMateria("cure"));
	vessel->equip(src2->createMateria("ice"));
	vessel->equip(src2->createMateria("snowgrave"));
	vessel->equip(src2->createMateria("cure"));

	ICharacter		*berdly = new Character("Berdly");
	ICharacter		*noelle = new Character(*(Character *)vessel);
	std::cout << "Materia slot 0:" << std::endl;
	noelle->use(0, *berdly);
	std::cout << "Materia slot 1:" << std::endl;
	noelle->use(1, *berdly);
	std::cout << "Materia slot 2:" << std::endl;
	noelle->use(2, *berdly);
	std::cout << "Materia slot 3:" << std::endl;
	noelle->use(3, *berdly);
	std::cout << "Materia slot 4 (non-existent):" << std::endl;
	noelle->use(4, *berdly);
	std::cout << std::endl;

	delete src1;
	delete src2;
	delete vessel;
	delete berdly;
    delete test;
	delete noelle;

	return (0);
}