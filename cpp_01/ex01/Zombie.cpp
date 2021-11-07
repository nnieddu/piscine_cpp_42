/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:37 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/07 23:07:16 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << "> " << "is Dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name, int i)
{
	std::stringstream convert;
	convert << i;
	std::string s = convert.str();	
	_name = name + s;
}
