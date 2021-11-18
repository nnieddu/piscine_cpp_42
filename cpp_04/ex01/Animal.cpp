/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:23:19 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 13:38:30 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Constructor Animal copy called" << std::endl;
    *this = copy;
    return ;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
    return ;
}

void Animal::makeSound() const
{
    std::cout << "I'm a Animal !" << std::endl;
    return ;
}

std::string Animal::getType() const
{
    return (_type);
}

Animal & Animal::operator=(Animal const &cpy)
{
    _type = cpy._type;
    return *this;
}