/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:44 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/16 20:12:13 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor DiamondTrap" << std::endl;
}

// DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
// {
// 	std::cout << "Constructor DiamondTrap" << std::endl;
// 	_name = name;
// 	_HitPoints = FragTrap::_HitPoints;
// 	_EnergyPoints = ScavTrap::_EnergyPoints;
// 	_AttackDamage = FragTrap::AttackDamage;
// 	ClapTrap::_name = name + "_clap_name";
// }

// DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.name)
// {
// 	name = copy.name;
// 	_HitPoints = copy._HitPoints;
// 	_EnergyPoints = copy._EnergyPoints;
// 	_AttackDamage = copy.AttackDamage;
// }

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

// DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
// {
// 	_name = copy.name;
// 	_HitPoints = copy._HitPoints;
// 	_EnergyPoints = copy._EnergyPoints;
// 	_AttackDamage = copy.AttackDamage;
// 	return (*this);
// }

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name << " clapTrap name is " << ClapTrap::_name << std::endl;
}
