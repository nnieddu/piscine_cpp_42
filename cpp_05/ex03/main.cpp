/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:40:32 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 18:39:25 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("roboto my request", "Bender");
	std::cout << *rrf << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
	std::cout << std::endl << *rrf << std::endl;
	rrf = someRandomIntern.makeForm("presidential request", "Bender");
	std::cout << std::endl << *rrf << std::endl << std::endl;
	rrf = someRandomIntern.makeForm("wtf", "Bender");
	
	return (0);
}
