/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:53 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:19:30 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceClass.hpp"

Ice::Ice(void)
{
	_type = "ice";
	return;
}

Ice::Ice(std::string type)
{
	_type = type;
	_type = "ice";
	return;
}

Ice::Ice(Ice const &copy)
{
	*this = copy;
}

Ice::~Ice()
{
	return;
}

Ice &Ice::operator=(Ice const &cpy)
{
	_type = cpy._type;
	return *this;
}

AMateria	*Ice::clone(void)const
{
	AMateria *clone = new Ice(_type);
	return clone;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}