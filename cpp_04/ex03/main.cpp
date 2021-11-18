/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:11:30 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:11:31 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"
#include "CharacterClass.hpp"
#include "IceClass.hpp"
#include "CureClass.hpp"
#include "ICharacterClass.hpp"
#include "IMateriaSourceClass.hpp"
#include "MateriaSourceClass.hpp"

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

	delete bob;
	delete me;
	delete src;
	
	return 0;
}