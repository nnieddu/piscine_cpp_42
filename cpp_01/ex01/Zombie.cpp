/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:37 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/03 17:33:52 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "<" << name << " " << id << " > " << "is returned to dust" << std::endl;
}

void Zombie::set_name(std::string name, int i)
{
	this->name = name;
	this->id = i;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << " " << id << " > ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
