/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:39:17 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/03 16:23:26 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
	: name(name)
{
	std::cout << "<" << this->name << "> "
			  << "is reborn" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> "
			  << "is returned to dust" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
