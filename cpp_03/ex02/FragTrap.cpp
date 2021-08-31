/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:01 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:47:02 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"Default constructor FragTrap"<<std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout<<"Constructor FragTrap"<<std::endl;
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout<<"Destructor FragTrap"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& copy):ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "✋ Let's high-five guys~!!" << std::endl;
}
