/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:46:03 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/16 17:48:55 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapi("ClapTrapi");
	ClapTrap clapi2(clapi);
	std::cout << std::endl;

	clapi.attack("BadGuy");
	clapi.takeDamage(9);
	std::cout << "clapi HP :" << clapi.getHP() << std::endl;
	clapi.beRepaired(10);
	std::cout << "clapi HP :" << clapi.getHP() << std::endl;

	std::cout << std::endl << "clapi2 HP :" << clapi2.getHP() << std::endl;
	clapi2.takeDamage(10);

	std::cout << std::endl;
	return 0;
}
