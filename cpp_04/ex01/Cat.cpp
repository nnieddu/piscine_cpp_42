/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:12:05 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 12:35:37 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() , _brain(new Brain()) 
{
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &src) : Animal() 
{
	std::cout << "Cat copy constructor" << std::endl;
	type = src.type;

	if (src._brain)
		_brain = new Brain(*src._brain);
	else 
		_brain = new Brain();
}

Cat::~Cat() 
{
	std::cout << "Cat destructor" << std::endl;
	delete _brain;

}

Cat &Cat::operator=(const Cat &src) 
{
	std::cout << "Cat assignation" << std::endl;
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

void Cat::makeSound() const 
{
	std::cout << "Miaaaaou" << std::endl;
}