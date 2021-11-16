/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:20 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/16 19:37:28 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called." << std::endl;
	_name = "Default_Scavtrap";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default constructor with name called." << std::endl;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called." << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << _name << " enter in Gate keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
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