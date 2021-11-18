/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:19 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:12:32 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureClass.hpp"

Cure::Cure(void)
{
	_type = "cure";
	return;
}

Cure::Cure(std::string type)
{
	_type = type;
	_type = "cure";
	return;
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure::~Cure()
{
	return;
}

Cure &Cure::operator=(Cure const &cpy)
{
	_type = cpy._type;
	return *this;
}

AMateria	*Cure::clone(void)const
{
	AMateria *clone = new Cure(_type);
	return clone;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}