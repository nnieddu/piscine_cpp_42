/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:13:22 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:18:42 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		_inv[i] = 0;
	}
	return;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		_inv[i] = copy._inv[i];
	}
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		_inv[i] = cpy._inv[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (_inv[i] == 0)
		{
			_inv[i] = m->clone();
			delete m;
			break;
		}
		i++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inv[i]->getType() == type)
		{
			AMateria *tmp = _inv[i];
			return (tmp);
		}
	}
	return (0);
}