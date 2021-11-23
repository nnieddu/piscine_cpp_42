/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:36:01 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 18:40:09 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src) 
{
  (void)src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &b)
{
	(void)b;
	return (*this);
}

std::string FormNames[3] = 
{
	"roboto my request",
	"shrubbery request",
	"presidential request"
};

Form *presidential_f(std::string target)
{
	std::cout << "Intern creates Presidential form with target " << target << std::endl;
	return (new PresidentialPardonForm(target));
}

Form *robotomy_f(std::string target)
{
	std::cout << "Intern creates Robotomy form with target " << target << std::endl;
	return (new RobotomyRequestForm(target));
}

Form *shrubbery_f(std::string target)
{
	std::cout << "Intern creates Shrubbery form with target " << target << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form *(*functptr[])(std::string target) = 
{
  robotomy_f, 
  shrubbery_f, 
  presidential_f
};

Form *Intern::makeForm(std::string NameForm, std::string TargetForm)
{
	for (int i = 0; i < 3; i++)
	{
		if (FormNames[i] == NameForm)
			return ((*functptr[i])(TargetForm));
	}
	std::cout << "The form doesn't exist." << std::endl;
	return (NULL);
}