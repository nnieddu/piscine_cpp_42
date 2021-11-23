/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:35:38 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 20:58:48 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
	private:
		const std::string	_name;
		int					_grade;
		void is_valid_grade(int grade) const;

	public:
		Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &src);
		virtual ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &src);

		const std::string &getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();

		void signForm(Form &form) const;

		struct GradeTooHighException : public std::exception 
		{
			virtual const char *what() const throw();
		};

		struct GradeTooLowException : public std::exception 
		{
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif