/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:46:25 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 16:17:37 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Scav");
	std::cout << std::endl;

	scav.attack("BadBoy");
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();
	
	std::cout << std::endl;
	return 0;
}
