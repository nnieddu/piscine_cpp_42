/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:47 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:40:47 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *zombieList;

	zombieList = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		zombieList[i].setName(name);
	}
	return zombieList;
}
