/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:46:51 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 18:32:06 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called." << std::endl;
	_name = "Default_Claptrap";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap Default constructor with name called." << std::endl;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _HitPoints(copy._HitPoints),
_EnergyPoints(copy._EnergyPoints), _AttackDamage(copy._AttackDamage)
{
	std::cout << "Copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_HitPoints = copy._HitPoints;
		_EnergyPoints = copy._EnergyPoints;
		_AttackDamage = copy._AttackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << _name << " attack " << target << ", causing " << _AttackDamage 
	<< " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
{
	_HitPoints += amount;
	std::cout << _name << " been repaired and gain " << amount << " HP !" << std::endl;
}

 unsigned int const &ClapTrap::getHP() const
{
	return _HitPoints;
}
