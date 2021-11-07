/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:26 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/03 17:34:33 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	int n = atoi(av[1]);
	
	if (ac != 2)
	{
		std::cout << "Error : Need one integer argument.";
		return (1);
	}
	
	Zombie *array = ZombieHorde(n, "zombie");

	for(int i = 0; i < n; i++)
		array[i].announce();
	delete[] array;
	return 0;
}
