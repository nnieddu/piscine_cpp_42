/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:33:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 16:53:54 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() , m_brain(new Brain()) 
{
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &src) : Animal() 
{
	std::cout << "Dog copy constructor" << std::endl;
	type = src.type;
    // Deep Copy
    if (src.m_brain){
        m_brain = new Brain(*src.m_brain);
    } else {
        m_brain = new Brain();
    }	
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
    delete m_brain;
}

Dog &Dog::operator=(const Dog &src) 
{
	std::cout << "Dog assignation" << std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
    // Deep Copy
    delete m_brain;
    if (src.m_brain){
        m_brain = new Brain(*src.m_brain);
    } else {
        m_brain = new Brain();
    }
    return (*this);
}

void Dog::makeSound() const 
{
	std::cout << "WaffWaff" << std::endl;
}