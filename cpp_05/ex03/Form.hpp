/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:02:01 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 18:08:56 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
	public:
		Form();
		Form(const std::string name, const int sign_grade, const int exec_grade);
		Form(const Form &src);
		virtual ~Form();
		Form &operator=(const Form &src);

		const std::string &getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(const Bureaucrat &bureaucrat);
		void checkExecutability( const Bureaucrat &executor ) const;
		virtual void execute(const Bureaucrat &executor) const = 0;

		struct GradeTooHigh : public std::exception 
		{
			virtual const char *what() const throw();
		};

		struct GradeTooLow : public std::exception 
		{
			virtual const char *what() const throw();
		};
		
		struct FormNotSigned : public std::exception 
		{
			virtual const char *what() const throw();
		};
		
		struct AlreasdySign : public std::exception 
		{
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif