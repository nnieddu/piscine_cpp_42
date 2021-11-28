/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:39:49 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 06:27:19 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) 
{
	_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) 
{
    if (this == &src)
		return (*this);
	Form::operator=(src);
	_target = src._target;
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const 
{
	try 
	{
		checkExecutability(executor);
	} 
	catch (std::exception &e)
	{
		throw;
	}
	if (this->getSigned())
	{
		std::cout << "Zafod Beeblebrox pardon " << _target << "." << std::endl;
	}
	else
	{
		throw FormNotSigned();
	}	
}