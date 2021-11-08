/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:43:17 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 11:49:08 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	(this->*(f[1]))();
}
void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	(this->*(f[2]))();

}
void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	(this->*(f[3]))();

}
void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;

	const char *options[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	int id = 0;

	while (id < 4 && options[id] && level.compare(options[id]))
		id++;

	switch (id)
	{
		case 0:
			(this->*(f[0]))();
			break;

		case 1:
			(this->*(f[1]))();
			break;

		case 2:
			(this->*(f[2]))();
			break;

		case 3:
			(this->*(f[3]))();
			break;

		default:
		   	std::cout << "Error : Karen can't complain with : \"" << level << "\"" << std::endl;
			break;
	}
	return ;
}
