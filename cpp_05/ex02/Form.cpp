/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:01:58 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 10:15:45 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signed(false),  _sign_grade(1),  _exec_grade(1) 
{
}

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

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < _sign_grade)
	{
		throw GradeTooHigh();
	}
	if (bureaucrat.getGrade() > _sign_grade)
	{
		throw GradeTooLow();
	}	
	if (_signed == true)
		throw Form::AlreasdySign();
	_signed = true;
}

void Form::Check_Executability( const Bureaucrat &executor ) const 
{
	int grade = executor.getGrade();

	if (grade < _exec_grade)
	{
		throw GradeTooHigh();
	}
	if (grade > _exec_grade)
	{
		throw GradeTooLow();
	}
}

const char *Form::GradeTooHigh::what() const throw() 
{
	return "Form grade too high.";
}

const char *Form::GradeTooLow::what() const throw() 
{
	return "Form grade too low.";
}

const char *Form::FormNotSigned::what() const throw() 
{
	return "Form's not signed.";
}

const char *Form::AlreasdySign::what() const throw() 
{
	return "Form's already signed.";
}

std::ostream&operator<<(std::ostream &os, const Form &form)
{
	const char *is_signed = (form.getSigned()) ? "true" : "false";

	os << "Form  [" << form.getName() << "]" << std::endl << "Grade to sign : " << form.getSignGrade() << std::endl << "Grade to exec : " << form.getExecGrade() << std::endl << "Signed        : " << is_signed;
	return os;
}