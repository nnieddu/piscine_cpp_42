/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:44:21 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 15:47:18 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << Fixed::bit));
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = val << Fixed::bit;
}

std::ostream &operator<<(std::ostream &out, Fixed const &output)
{
	out << output.toFloat();
	return out;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << Fixed::bit);
}

int Fixed::toInt(void) const
{
	return this->value >> Fixed::bit;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawbits(int const raw)
{
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
