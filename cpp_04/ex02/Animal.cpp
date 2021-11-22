/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:05:23 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 04:00:48 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::Animal() : type("Animal")
{ 
	std::cout << "Animal default constructor" << std::endl;
}

AAnimal::Animal(const Animal &src) 
{
	std::cout << "Animal copy constructor" << std::endl;
	type = src.type;
}

AAnimal::~Animal() 
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
