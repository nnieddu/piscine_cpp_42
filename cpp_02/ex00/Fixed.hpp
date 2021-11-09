/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:44:06 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/09 13:19:55 by ninieddu         ###   ########lyon.fr   */
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

public:
	Fixed();
	Fixed(Fixed const &fixed);
	~Fixed();

	Fixed &operator=(Fixed const &fixed);

	int getRawBits(void) const;
	void setRawbits(int const raw);
};

#endif
