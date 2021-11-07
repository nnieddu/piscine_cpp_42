/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:26 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/07 23:01:16 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	int n;
	
	if (ac != 2)
	{
		std::cout << "Error : Need one argument (int).";
		return (1);
	}
	n = atoi(av[1]);
	if (n <= 0)
	{
		std::cout << "Error : Need a positive int.";
		return (1);
	}
	Zombie *array = ZombieHorde(n, "Zombie");

	array->announce();

	for(int i = 0; i < n; i++)
		array[i].announce();

	delete[] array;
	return 0;
}
