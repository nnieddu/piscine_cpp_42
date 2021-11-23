/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:38:53 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 18:34:05 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm form("maison");
	Bureaucrat nini("nini", 145);
	Bureaucrat phil("phil", 137);
	
	std::cout << form << std::endl << std::endl;
	nini.executeForm(form);
	nini.signForm(form);
	nini.executeForm(form);
	phil.signForm(form);
	phil.executeForm(form);

	std::cout << std::endl << "=============================" << std::endl << std::endl;

	RobotomyRequestForm Rform("target");
	nini = Bureaucrat("nini", 45);
	phil = Bureaucrat("phil", 73);

	std::cout << Rform << std::endl << std::endl;
	nini.executeForm(Rform);
	phil.signForm(Rform);
	nini.signForm(Rform);
	nini.executeForm(Rform);
	nini.signForm(Rform);
	phil.executeForm(Rform);

	std::cout << std::endl << "=============================" << std::endl << std::endl;
	
	PresidentialPardonForm Pform("target");
	nini = Bureaucrat("nini", 1);
	phil = Bureaucrat("phil", 73);

	std::cout << Pform << std::endl << std::endl;
	nini.executeForm(Pform);
	phil.signForm(Pform);
	nini.signForm(Pform);
	phil.executeForm(Pform);
	nini.executeForm(Pform);
	nini.signForm(Pform);

	return (0);
}


// #include <cstdlib>
// int main()
// {
// 	int max = 2;
// 	srand(time(0));
// 	std::cout << rand()%max << std::endl;
// 	std::cout << time(0) << std::endl;
// 	return 0;
// }