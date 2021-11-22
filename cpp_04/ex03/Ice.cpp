/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:47 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 04:28:26 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") 
{
}

Ice::Ice(const Ice &src) : AMateria(src) 
{
}

Ice::~Ice() 
{
}

Ice &Ice::operator=(const Ice &src) 
{
	(void)src;
    return (*this);
}

AMateria *Ice::clone() const 
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target) 
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}