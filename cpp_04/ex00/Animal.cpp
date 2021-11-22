/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:05:23 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 12:06:02 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{ 
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
}

Animal::~Animal() 
{
	std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &src) 
{
	std::cout << "Animal assignation operator" << std::endl;
	if (this == &src)
		return(*this);
	type = src.type;
	return(*this);
}

const std::string &Animal::getType() const 
{
	return (type);
}

void Animal::makeSound() const 
{
	std::cout << "Animal sound" << std::endl;
}
