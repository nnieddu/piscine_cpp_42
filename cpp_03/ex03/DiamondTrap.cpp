/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:44 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 15:17:51 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor DiamondTrap." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "Constructor DiamondTrap with args called. " << std::endl;
	_name = name;
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_AttackDamage = copy._AttackDamage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and my clapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	FragTrap::attack(target);
}

void DiamondTrap::guardGate()
{
    std::cout << _name << " enter in Gate keeper mode." << std::endl;
}

void DiamondTrap::highFivesGuys(void)
{
	std::cout << _name << " Ask : High-five ? :)" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (amount >= _HitPoints)
	{
		_HitPoints = 0;
		std::cout << _name << " is dead." << std::endl;
		return ;
	}
	_HitPoints -= amount;
	std::cout << _name << " is attacked and take " << amount << " points of damage !" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	_HitPoints += amount;
	std::cout << _name << " has been repaired and gain " << amount << " HP !" << std::endl;
}
