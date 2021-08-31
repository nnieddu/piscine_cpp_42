/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:44:06 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:44:06 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int value;
	static const int bit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &fixed);

	int getRawBits(void) const;
	void setRawbits(int const raw);
};

#endif
