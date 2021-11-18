/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:26:49 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/27 18:09:03 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Constructor Dog called" << std::endl;
    return ;
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Constructor Dog copy called" << std::endl;
    *this = copy;
    return ;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    return ;
}

void Dog::makeSound() const
{
    std::cout << "WoofWoof" << std::endl;
    return ;
}

std::string Dog::getType() const
{
    return (_type);
}

Dog & Dog::operator=(Dog const &cpy)
{
    _type = cpy._type;
    return *this;
}