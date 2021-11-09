/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:44:21 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/09 14:43:27 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits;

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (val * (1 << _bits)) + 1;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = val << _bits;
}

float Fixed::toFloat(void) const
{
	return (float)_value / (float)(1 << _bits);
}

int Fixed::toInt(void) const
{
	return (_value >> _bits);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawbits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &output)
{
	out << output.toFloat();
	return (out);
}