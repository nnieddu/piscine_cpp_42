/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:20 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:47:21 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout<<"Default constructor ScavTrap"<<std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout<<"Constructor ScavTrap"<<std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"Destructor ScavTrap"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy):ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void ScavTrap::GuardGate()
{
	std::cout << "ScavTrap changes to GuardGate mode." << std::endl;
}
