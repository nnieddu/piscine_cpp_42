/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:01:58 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 21:08:34 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int sign_grade, const int exec_grade) :_name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
	{
		throw Form::GradeTooHigh();
	} 
	else if (sign_grade > 150 || exec_grade > 150)
	{
		throw Form::GradeTooLow();
	}
}

Form::Form(const Form &src) : _signed(src._signed),  _sign_grade(src._sign_grade),  _exec_grade(src._exec_grade) 
{
}

Form::~Form() 
{
}

Form &Form::operator=(const Form &src)
{
	if (this == &src)
		return (*this);
	_signed = src._signed;
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	int grade = bureaucrat.getGrade();

	if (grade < _sign_grade)
	{
		throw GradeTooHigh();
	}
	if (grade > _sign_grade)
	{
		throw GradeTooLow();
	}
	_signed = true;
}

const std::string&Form::getName() const 
{ 
	return _name; 
}

bool Form::getSigned() const 
{ 
	return _signed;
}

int Form::getSignGrade() const 
{ 
	return _sign_grade;
}

int Form::getExecGrade() const 
{ 
	return _exec_grade; 
}

const char *Form::GradeTooHigh::what() const throw() 
{
	return "Grade too high";
}

const char *Form::GradeTooLow::what() const throw() 
{
	return "Grade too low";
}

std::ostream&operator<<(std::ostream &os, const Form &form)
{
	//
	//
}