/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:48 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 15:09:34 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Cat called" << std::endl;
    _type = "Cat";
    ideas = new Brain();
    return ;
}

Cat::Cat(Cat const &copy)
{
    std::cout << "Constructor Cat copy called" << std::endl;
    ideas = new Brain();
    *ideas = *(copy.ideas);
}

Cat::~Cat()
{
    delete ideas;
    std::cout << "Destructor Cat called" << std::endl;
    return ;
}

void Cat::makeSound() const
{
    std::cout << "I'm a Cat !" << std::endl;
    return ;
}

std::string Cat::getType() const
{
    return (_type);
}

Cat & Cat::operator=(Cat const &cpy)
{
    ideas = new Brain();
    *ideas = *(cpy.ideas);
    return *this;
}