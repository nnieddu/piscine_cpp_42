/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:41:17 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 07:28:13 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
}

void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}
