/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:42:58 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:42:59 by ninieddu         ###   ########lyon.fr   */
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
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::commentType_ const Karen::commentTypeList_[] =
{
	{"DEBUG", &Karen::debug},
	{"INFO", &Karen::info},
	{"WARNING", &Karen::warning},
	{"ERROR", &Karen::error}
};

void Karen::complain(std::string level)
{
	for(int i = 0; i<4; i++)
	{
		if(level == Karen::commentTypeList_[i].name)
		{
			return (this->*(commentTypeList_[i].func))();
		}
	}
	std::cout << "Karen cannot create " << level << std::endl;
}
