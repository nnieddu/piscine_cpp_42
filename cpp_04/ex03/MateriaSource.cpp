/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:52:52 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:56:34 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _index(0) 
{
	for (int i = 0 ; i < MAX_SIZE ; i++)
		_book[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	_index = 0;
	for (int i = 0 ; i < src._index ; i++)
	{
		AMateria *materia = _book[i];
		_book[_index++] = materia->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < _index ; i++)
		delete _book[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) 
{
    if (this == &src)
		return *this;
	_index = src._index;
	for (int i = 0 ; i < MAX_SIZE ; i++)
	{
		AMateria *materia = src._book[i];
		delete _book[i];
		if (materia != NULL)
			_book[i] = materia->clone();
	}
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_index < MAX_SIZE)
		_book[_index++] = materia->clone();
	delete (materia);
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria *materia; 

	for (int i = 0 ; i < MAX_SIZE ; i++)
	{
		materia = _book[i];
		if (materia != NULL)
		{
			if (materia->getType() == type)
				return materia->clone();
		}
	}
	std::cout << "This shit dosn't exist dude." << std::endl;			
	return NULL;
}
