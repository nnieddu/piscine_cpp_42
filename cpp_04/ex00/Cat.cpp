/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:48 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/27 18:08:20 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Constructor Cat called" << std::endl;
    return ;
}

Cat::Cat(Cat const &copy)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    *this = copy;
    return ;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    return ;
}

void Cat::makeSound() const
{
    std::cout << "Miaou" << std::endl;
    return ;
}

std::string Cat::getType() const
{
    return (_type);
}

Cat & Cat::operator=(Cat const &cpy)
{
    _type = cpy._type;
    return *this;
}

WrongCat::WrongCat()
{
    std::cout << "Constructor WrongCat called" << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
    return ;
}

void WrongCat::makeSound() const
{
    std::cout << "I'm a WROOONG Cat !" << std::endl;
    return ;
}