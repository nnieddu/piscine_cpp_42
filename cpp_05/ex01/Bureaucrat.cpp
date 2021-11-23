/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:19 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 21:00:32 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) 
{
	try 
	{
		is_valid_grade(grade);
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

void Bureaucrat::is_valid_grade(int grade) const 
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const 
{
	return _grade;
}

void Bureaucrat::incGrade() 
{
	try 
	{
		is_valid_grade(_grade - 1);
		_grade--;
	} 
	catch (std::exception &e) 
	{
		throw;
	}
}

void Bureaucrat::decGrade() 
{
	try {
		is_valid_grade(_grade + 1);
		_grade++;
	} catch (std::exception &e) {
		throw;
	}
}

void Bureaucrat::signForm(Form &form) const 
{
	try 
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << this->getName() << " cannot sign because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return "Grade too low";
}

std::ostream&operator<<(std::ostream &os, const Bureaucrat &src) 
{
    os << src.getName() << " grade =" << src.getGrade();
    return os;
}
