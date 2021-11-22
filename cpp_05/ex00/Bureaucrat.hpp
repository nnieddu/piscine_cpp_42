/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 05:09:33 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 05:22:30 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>

class Bureaucrat 
{
	private:
		const static int	MAX_grade = 1; //
		const static int	MIN_grade = 150; //
		const std::string	_name;
		int					_grade;
		void check_grade(int grade) const;

	public:
		Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &src);
		virtual ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &src);

		const std::string &getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();

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