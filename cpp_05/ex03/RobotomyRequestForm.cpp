/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:39:49 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 09:40:03 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) 
{
	_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) 
{
    if (this == &src)
		return (*this);
	Form::operator=(src);
	_target = src._target;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const 
{
	try 
	{
		Check_Executability(executor);
	} 
	catch (std::exception &e)
	{
		throw;
	}
	if (getSigned())
	{
   		int max = 2;
   		srand(time(0));
		if (rand()%max == 1)
		{
			std::cout << "*Drill sound* : " << _target << "'s well robotomized" << std::endl;
		}
		else 
		{
			std::cout << "*Drill sound* : Failed to robotomize " << _target << std::endl;
		}
	} 
	else 
	{
		throw FormNotSigned();
	}
}