/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:01 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 15:10:23 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	_name = "Default_FragTrap";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout<< "FragTrap Default constructor with name called." <<std::endl;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap Destructor called."<<std::endl;
}

FragTrap::FragTrap(const FragTrap& copy):ClapTrap(copy._name)
{
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_AttackDamage = copy._AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	_name = copy._name;
	_HitPoints = copy._HitPoints;
	_EnergyPoints = copy._EnergyPoints;
	_AttackDamage = copy._AttackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " Ask : High-five ? :)" << std::endl;
}
