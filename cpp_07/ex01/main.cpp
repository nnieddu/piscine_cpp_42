/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:36:07 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 04:39:29 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void Tprint(const T &toPrint)
{
	std::cout << toPrint << std::endl;
}

void intIter()
{
	int sample[3] = {1, 2, 3};

	iter(sample, 3, Tprint);
}

void stringIter()
{
	std::string sample[3] = {"A", "B", "C"};
	
	iter(sample, 3, Tprint);
}

int	main(void)
{
	intIter();
	std::cout << std::endl;

	stringIter();
	std::cout << std::endl;
	
	return (0);
}
