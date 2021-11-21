/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:12:05 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 10:52:09 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() 
{
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &src) : Animal() 
{
	std::cout << "Cat copy constructor" << std::endl;
	type = src.type;
}

Cat::~Cat() 
{
	std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src) 
{
	std::cout << "Cat assignation" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

void Cat::makeSound() const 
{
	std::cout << "Miaaaaou" << std::endl;
}