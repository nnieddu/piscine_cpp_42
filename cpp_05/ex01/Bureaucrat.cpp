/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 05:09:30 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 18:32:40 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Employe"), _grade(150) 
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) 
{
	try 
	{
		checkGrade(grade);
		_grade = grade;
	} 
	catch (std::exception &e)
	{
		throw;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name) 
{
	_grade = src._grade;
}

Bureaucrat::~Bureaucrat() 
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) 
{
    if (this == &src)
		return (*this);
	_grade = src._grade;
    return (*this);
}

void Bureaucrat::checkGrade(int grade) const 
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const std::string &Bureaucrat::getName() const 
{
	return _name;
}

int	Bureaucrat::getGrade() const 
{
	return _grade;
}

void	Bureaucrat::UpGrade() 
{
	try 
	{
		checkGrade(_grade - 1);
		_grade--;
	} 
	catch (std::exception &e) 
	{
		throw;
	}
}

void Bureaucrat::DownGrade() 
{
	try 
	{
		checkGrade(_grade + 1);
		_grade++;
	} 
	catch (std::exception &e) 
	{
		throw;
	}
}

void Bureaucrat::signForm(Form &form) const
{
	try 
	{
		form.beSigned(*this);
		std::cout << getName() << " sign " << form.getName() << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << getName() << " cannot sign form " << form.getName() << " because : " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return "Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return "Grade too low.";
}

std::ostream&operator<<(std::ostream &os, const Bureaucrat &src) 
{
    os << src.getName() << ", bureaucrat grade : " << src.getGrade();
    return os;
}
