/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:57:12 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	////////////
	me->unequip(0);
	me->use(0, *bob);
	tmp = src->createMateria("wtf");
	///////////

	delete bob;
	delete me;
	delete src;
	
	return 0;
}