/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 12:40:50 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:52:06 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : _index(0), _name(name) 
{
	for (int i = 0 ; i < INVENTORY_SIZE ; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src) 
{
	_name = src.getName();
	_index = src._index;

	for (int i = 0 ; i < INVENTORY_SIZE ; i++)
	{
		AMateria *materia = src._inventory[i];
		if (materia != NULL)
			_inventory[i] = materia->clone();
	}
}

Character::~Character() 
{
	for (int i = 0 ; i < _index ; i++)
		delete _inventory[i];
}

Character &Character::operator=(const Character &src) 
{
	if (this == &src)
		return *this;
	
	_name = src.getName();
	_index = src._index;

	for (int i = 0 ; i < src._index ; i++)
	{
		delete _inventory[i];
		_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const 
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_index < INVENTORY_SIZE)
		_inventory[_index++] = m;
}

void Character::unequip(int i)
{
	if (i < INVENTORY_SIZE)
		_inventory[i] = NULL;
}

void Character::use(int i, ICharacter& target)
{
	if (_inventory[i] != NULL)
		_inventory[i]->use(target);
	else
		std::cout << "* Omg nooo ! It's empty ! * " << std::endl;
}
