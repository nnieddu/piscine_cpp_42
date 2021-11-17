/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:48:00 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 15:13:26 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondtrap("diamond");

	diamondtrap.highFivesGuys();
	diamondtrap.attack("Bboy");
	diamondtrap.beRepaired(10);
	diamondtrap.takeDamage(10);
	
	diamondtrap.whoAmI();
	return 0;
}
