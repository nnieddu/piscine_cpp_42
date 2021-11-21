/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:48:46 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 08:10:19 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() 
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal() 
{
	type = src.type;
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (&src == this)
		return(*this);
	type = src.type;
	std::cout << "WrongCat assignation operator" << std::endl;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

const std::string &WrongCat::getType() const
{
	return type;
}

void WrongCat::makeSound() const
{
	std::cout << "uoaaaaiM" << std::endl;
}
