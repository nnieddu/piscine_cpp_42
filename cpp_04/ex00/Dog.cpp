/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:33:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 08:30:08 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() 
{
	type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &src) : Animal() 
{
	type = src.type;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) 
{
	std::cout << "Dog assignation" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

void Dog::makeSound() const 
{
	std::cout << "WafWaf" << std::endl;
}