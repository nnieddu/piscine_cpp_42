/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:40:32 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 10:35:01 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("roboto my request", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
	std::cout << std::endl << *rrf << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("presidential request", "Bender");
	std::cout << std::endl << *rrf << std::endl << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("wtf", "Bender");
	return (0);
}
