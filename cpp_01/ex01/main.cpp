/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:26 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:40:27 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *array = ZombieHorde(10, "zombie");

	for(int i=0; i < 10; i++)
	{
		array[i].announce();
	}
	delete[] array;
	return 0;
}
