/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:36:01 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 06:32:34 by ninieddu         ###   ########.fr       */
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

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

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

Form *Intern::makeForm(std::string NameForm, std::string TargetForm)
{
	std::string formNames[3] = 
	{
		"roboto my request",
		"shrubbery request",
		"presidential request"
	};
	
	Form *(*ftPtr[])(std::string target) = 
	{
	  robotomy_f, 
	  shrubbery_f, 
	  presidential_f
	};

	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == NameForm)
			return ((*ftPtr[i])(TargetForm));
	}
	std::cout << "The form doesn't exist." << std::endl;
	return (NULL);
}