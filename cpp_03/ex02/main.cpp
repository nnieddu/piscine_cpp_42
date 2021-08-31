/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:09 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:47:09 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("fragtrap");

	frag.highFivesGuys();
	frag.attack("bkwag");
	frag.beRepaired(10);
	frag.takeDamage(10);
	return 0;
}
