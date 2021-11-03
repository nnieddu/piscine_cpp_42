/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:47 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/03 17:34:16 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *zombieList;

	zombieList = new Zombie[n];
	for(int i = 0; i < n; i++)
		zombieList[i].set_name(name, i);
	return zombieList;
}
