/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:34:59 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 14:36:46 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, int length, void (*ft)(const T&))
{
	for (int i = 0 ; i < length ; i++)
		ft(array[i]);
}

class niniSample 
{
	public :
		std::string name;
		niniSample(): name("nini"){};
};

std::ostream&operator<<(std::ostream &os, const niniSample &src) 
{
    os << src.name;
    return os;
}

#endif