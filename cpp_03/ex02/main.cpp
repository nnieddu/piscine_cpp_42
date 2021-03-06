/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:09 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 18:28:54 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("fragtrap");
	std::cout << std::endl;

	frag.highFivesGuys();
	frag.attack("Bboy");
	frag.beRepaired(10);
	frag.takeDamage(10);
	
	std::cout << std::endl;
	return 0;
}
