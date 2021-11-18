/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:26:49 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 15:09:54 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Constructor Dog called" << std::endl;
    ideas = new Brain();
    return ;
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Constructor Dog copy called" << std::endl;
    ideas = new Brain();
    *ideas = *(copy.ideas);
}

Dog::~Dog()
{
    delete ideas;
    std::cout << "Destructor Dog called" << std::endl;
    return ;
}

void Dog::makeSound() const
{
    std::cout << "I'm a Dog !" << std::endl;
    return ;
}

std::string Dog::getType() const
{
    return (_type);
}

Dog & Dog::operator=(Dog const &cpy)
{
    ideas = new Brain();
    *ideas = *(cpy.ideas);
    return *this;
}