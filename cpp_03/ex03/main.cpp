/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:48:00 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 16:33:22 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << std::endl;
	DiamondTrap diamondtrap("diamond");
	std::cout << std::endl;

	diamondtrap.highFivesGuys();
	diamondtrap.attack("Bboy");
	diamondtrap.beRepaired(10);
	diamondtrap.takeDamage(10);

	std::cout << std::endl;
	diamondtrap.whoAmI();

	std::cout << std::endl;
	return 0;
}
