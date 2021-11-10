/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:44:48 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/10 16:53:56 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _bits = 8;

	int	getRawBits(void) const;
	void setRawbits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;

	bool operator>(const Fixed &value);
	bool operator<(const Fixed &value);
	bool operator>=(const Fixed &value);
	bool operator<=(const Fixed &value);
	bool operator==(const Fixed &value);
	bool operator!=(const Fixed &value);

public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed(const float val);
	Fixed(const int val);
	~Fixed();

	float getFloatValue(void) const;

	Fixed &operator=(Fixed const &fixed);
	Fixed &operator+(const Fixed &value);
	Fixed &operator-(const Fixed &value);
	Fixed &operator/(const Fixed &value);
	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator*(const Fixed &value);

	static Fixed max(Fixed &a, Fixed &b);
	static const Fixed max(const Fixed &a, const Fixed &b);
	static Fixed min(Fixed &a, Fixed &b);
	static const Fixed min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif
