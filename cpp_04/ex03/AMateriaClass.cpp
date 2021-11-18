/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:10:43 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:10:59 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"

AMateria::AMateria(void): _type("Default")
{
	return;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	return;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
	return;
}

AMateria &AMateria::operator=(AMateria const &cpy)
{
	_type = cpy._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}
