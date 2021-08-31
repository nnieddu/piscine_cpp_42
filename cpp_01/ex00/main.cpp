/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:36:32 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:38:52 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("zombie");
	Zombie *new_two = newZombie("Mj");
	Zombie *new_three = newZombie("Left4Dead");
	new_two->announce();
	new_three->announce();
	delete new_two;
	delete new_three;
	return 0;
}
