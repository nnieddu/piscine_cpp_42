/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:31:34 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 18:33:58 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called." << std::endl;
	_name = "Default_Animal";
}

Animal::Animal(std::string name) : _name(name)
{
	std::cout << "Animal Default constructor with name called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
}

Animal::Animal(const Animal& copy) : _name(copy._name)
{
	std::cout << "Copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
	}
	return (*this);
}

//  unsigned int const &Animal::getHP() const
// {
// 	return _HitPoints;
// }
