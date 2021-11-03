/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:36:32 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/03 16:32:55 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("zombouie");
	Zombie *z2 = newZombie("Douwix");
	Zombie *z3 = newZombie("Douwax");
	z2->announce();
	z3->announce();
	delete z2;
	delete z3;
	return 0;
}
