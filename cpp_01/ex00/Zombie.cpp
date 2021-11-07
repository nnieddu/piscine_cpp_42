/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:39:17 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/07 22:25:10 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "<" << _name << "> " << "is Born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << "> " << "is Dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
