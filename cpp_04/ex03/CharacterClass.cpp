/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:11:37 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:11:53 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharacterClass.hpp"

Character::Character(void): _name("Default")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
	return;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
	return;
}

Character::Character(Character &copy)
{
	*this = copy;
}

Character::~Character(void)
{
	for (int i = 0; (_inventory[i]); i++)
		delete _inventory[i];
	return;
}

Character &Character::operator=(Character const &cpy)
{
	_name = cpy._name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = cpy._inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (_inventory[i] == 0)
		{
			_inventory[i] = m;
			break;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 || idx < 4)
		_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 4)
	{
		std::cout << "Can't use" << std::endl;
		return ;
	}
	if ((idx >= 0 || idx < 4) && _inventory[idx] != 0)
	{
		if (_inventory[idx] != 0)
			_inventory[idx]->use(target);
		else
			std::cout << "Can't use" << std::endl;
	}
}