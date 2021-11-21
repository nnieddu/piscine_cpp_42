/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:35:40 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 08:04:51 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") 
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) 
{
	type = src.type;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) 
{
	if (&src == this)
		return (*this);
	type = src.type;
	std::cout << "WrongAnimal assignation operator" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

const std::string &WrongAnimal::getType() const 
{
	return type;
}

void WrongAnimal::makeSound() const 
{
	std::cout << "WrongAnimmal sound" << std::endl;
}

