/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:47 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/07 22:51:18 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
	Zombie *zombies_array;
	zombies_array = new Zombie[N];

	for(int i = 0; i < N; i++)
		zombies_array[i].setName(name, i);

	return zombies_array;
}
