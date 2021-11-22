/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:33:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:14:54 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() , _brain(new Brain()) 
{
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &src) : AAnimal() 
{
	std::cout << "Dog copy constructor" << std::endl;
	type = src.type;

	if (src._brain)
		_brain = new Brain(*src._brain);
	else 
		_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &src) 
{
	std::cout << "Dog assignation" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;

	delete _brain;
	if (src._brain)
		_brain = new Brain(*src._brain);
	else 
		_brain = new Brain();
	return (*this);
}

void Dog::makeSound() const 
{
	std::cout << "WaffWaff" << std::endl;
}
