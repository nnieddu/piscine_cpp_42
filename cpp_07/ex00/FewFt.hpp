/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FewFt.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:49:26 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 21:55:56 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FEWFT_HPP
# define FEWFT_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T	max(T a, T b)
{
	return ((a > b) ? a : b);
}

#endif