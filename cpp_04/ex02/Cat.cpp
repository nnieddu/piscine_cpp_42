/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:12:05 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 10:49:46 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() , m_brain( new Brain() ) 
{
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &src) : Animal() 
{
	std::cout << "Cat copy constructor" << std::endl;
	type = src.type;
		// Deep Copy
	if ( src.m_brain ){
		m_brain = new Brain(*src.m_brain);
	} else {
		m_brain = new Brain();
	}
}

Cat::~Cat() 
{
	std::cout << "Cat destructor" << std::endl;
	delete m_brain;

}

Cat &Cat::operator=(const Cat &src) 
{
	std::cout << "Cat assignation" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	// Deep Copy
	delete m_brain;
	if ( src.m_brain ){
		m_brain = new Brain(*src.m_brain);
	} else {
		m_brain = new Brain();
	}

	return (*this);
}

void Cat::makeSound() const 
{
	std::cout << "Miaaaaou" << std::endl;
}