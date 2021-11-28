/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:39:49 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 10:34:25 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src) 
{
	_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) 
{
    if (this == &src)
		return (*this);
	Form::operator=(src);
	_target = src._target;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const 
{
	try 
	{
		checkExecutability(executor);
	} 
	catch (std::exception &e)
	{
		throw;
	}
	if (getSigned())
	{
		std::string filename = _target + "_shrubbery";
		std::ofstream outfile(filename.c_str(), std::ios::app);
		outfile << "\
		      ,,,.       \n\
		   ,&%@&%&&%,    \n\
		  ,%&\\%&&%&&%,  \n\
		  %&&%&%&/%&&@%  \n\
		  %&&%/ %&@%&@%  \n\
		  `&%\\ ` /%&'   \n\
		      | |        \n\
		      |o|        \n\
		      |.|        " << std::endl;
		outfile.close();
	}
	else 
	{
		throw FormNotSigned();
	}
}