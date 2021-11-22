/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:41 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 04:01:21 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
}

Cure::Cure(const Cure &src) : AMateria(src) 
{
}

Cure::~Cure() 
{
}

Cure &Cure::operator=(const Cure &src) 
{
	(void)src;
    return (*this);
}

AMateria *Cure::clone() const 
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) 
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
