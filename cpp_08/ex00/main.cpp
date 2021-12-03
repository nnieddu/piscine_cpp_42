/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:24:38 by ninieddu          #+#    #+#             */
/*   Updated: 2021/12/03 05:27:33 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	std::vector<int>::iterator it;
	std::vector<int> vec;

	for (int i = 0 ; i < 10 ; i++)
		vec.push_back(i);

	it = easyfind(vec, 2);
	if (it != vec.end())
		std::cout << "Easyfind : " << *it << std::endl;
    else 
		std::cout << "Error : nothing found." << std::endl;

	it = easyfind(vec, 100);
	if (it != vec.end())
		std::cout << "Easyfind : " << *it << std::endl;
    else 
		std::cout << "Error : nothing found." << std::endl;
	
	
	std::cout << std::endl;


	std::list<int>::iterator l_it;
	std::list<int> list;

	for (int i = 0 ; i < 10 ; i++)
		list.push_back(i);

	l_it = easyfind(list, 2);
	if (l_it != list.end())
		std::cout << "Easyfind : " << *l_it << std::endl;
	else
		std::cout << "Error : nothing found." << std::endl;

	l_it = easyfind(list, 100);
	if (l_it != list.end())
		std::cout << "Easyfind : " << *l_it << std::endl;
	else 
		std::cout << "Error : nothing found." << std::endl;

	return (0);
}