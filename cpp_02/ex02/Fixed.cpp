/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:44:42 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/10 19:00:41 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits;

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
	_value = fixed.getRawBits();
}

Fixed::Fixed(int const val)
{
	_value = val << _bits;
}

Fixed::Fixed(float const val)
{
	_value = (val * (1 << _bits) + 1);
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	_value = fixed.getRawBits();
	return (*this);
}

float Fixed::getFloatValue(void) const
{
	return ((float)_value / (1 << _bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.getFloatValue();
	return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _bits));
}

int Fixed::toInt(void) const
{
	return (_value >> _bits);
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawbits(int const raw)
{
	_value = raw;
}

Fixed &Fixed::operator+(const Fixed &value)
{
	_value += value._value;
	return (*this);
}

Fixed &Fixed::operator-(const Fixed &value)
{
	_value -= value._value;
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &value)
{
	_value *= (value._value / (1 << value._bits));
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &value)
{
	_value /= (value._value * (1 << value._bits));
	return (*this);
}

bool Fixed::operator>(const Fixed &value)
{
	return (_value > value._value);
}

bool Fixed::operator<(const Fixed &value)
{
	return (_value < value._value);
}

bool Fixed::operator<=(const Fixed &value)
{
	return (_value <= value._value);
}

bool Fixed::operator>=(const Fixed &value)
{
	return (_value >= value._value);
}

bool Fixed::operator==(const Fixed &value)
{
	return (_value == value._value);
}

bool Fixed::operator!=(const Fixed &value)
{
	return (_value != value._value);
}

Fixed &Fixed::operator++()
{
	_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	return (++*this);
}

Fixed &Fixed::operator--()
{
	_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	return (--*this);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed const Fixed::max(const Fixed &a, const Fixed &b)
{
	Fixed temp(a);
	if (temp < b)
		return (b);
	else
		return (a);
}

Fixed const Fixed::min(const Fixed &a, const Fixed &b)
{
	Fixed temp(a);

	if (temp > b)
		return (b);
	else
		return (a);
}
