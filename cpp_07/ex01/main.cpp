/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:36:07 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 14:36:37 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void Tprint(const T &toPrint)
{
	std::cout << toPrint << std::endl;
}

int	main(void)
{
	int 		intIter[3] = {1, 2, 3};
	std::string stringIter[3] = {"A", "B", "C"};
	niniSample	nini[3];
	
	iter(intIter, 3, Tprint);
	std::cout << std::endl;
	
	iter(stringIter, 3, Tprint);
	std::cout << std::endl;
	
	iter(nini, 3, Tprint);
	
	return (0);
}
