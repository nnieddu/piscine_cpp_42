/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:55:49 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 04:35:01 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria(const AMateria &src) 
{
	type = src.getType();
}

AMateria::~AMateria() 
{
}

AMateria &AMateria::operator=(const AMateria &src) 
{
    if (this == &src)
		return (*this);
	type = src.getType();
    return (*this);
}

const std::string &AMateria::getType() const 
{
	return (type);
}

void AMateria::use(ICharacter &target)
{ 
	target;
}