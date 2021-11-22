/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:52:52 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 05:03:27 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _selection(0) 
{
	for (int i = 0 ; i < MAX_SIZE ; i++)
		book[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	_selection = 0;
	for (int i = 0 ; i < src._selection ; i++)
	{
		AMateria *materia = book[i];

		book[_selection++] = materia->clone();
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0 ; i < _selection ; i++)
	{
		delete book[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) 
{
    if (this == &src)
		return *this;
	_selection = src._selection;
	for (int i = 0 ; i < MAX_SIZE ; i++)
	{
		AMateria *materia = src.book[i];
		delete book[i];
		if (materia != NULL)
			book[i] = materia->clone();
	}
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_selection < MAX_SIZE)
		book[_selection++] = materia->clone();
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0 ; i < MAX_SIZE ; i++)
	{
		AMateria *materia = book[i];

		if (materia != NULL)
		{
			if (materia->getType() == type)
				return materia->clone();
		}
	}
	return NULL;
}
