/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:42:07 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 00:08:41 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	
	this->type = type;
}

std::string const &Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
