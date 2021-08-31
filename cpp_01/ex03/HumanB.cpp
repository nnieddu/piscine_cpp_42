/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:41:50 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:41:50 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):weapon(NULL)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon *weapon):weapon(weapon)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his" << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
