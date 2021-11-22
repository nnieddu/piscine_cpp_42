/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:05:23 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:13:43 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal")
{ 
	std::cout << "Animal default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) 
{
	std::cout << "Animal copy constructor" << std::endl;
	type = src.type;
}

AAnimal::~AAnimal() 
{
	std::cout << "Animal destructor" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src) 
{
	std::cout << "Animal assignation operator" << std::endl;
	if (this == &src)
		return(*this);
	type = src.type;
	return(*this);
}

const std::string &AAnimal::getType() const 
{
	return (type);
}
