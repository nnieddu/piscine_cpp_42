/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:35:06 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 06:09:18 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int	main(void)
{
	Bureaucrat Nini("Ninieddu", 100);

	Form form("100", 100, 100);
	std::cout << form << std::endl << std::endl;
	Form too_high_form("10", 10, 10);
	std::cout << too_high_form << std::endl << std::endl;
	Form lower_form("101-100", 101, 100);
	std::cout << lower_form << std::endl << std::endl;

	std::cout << "----------------------------" << std::endl << std::endl;


	Nini.signForm(form);
	std::cout << form << std::endl << std::endl;
	Nini.signForm(too_high_form);
	std::cout << too_high_form << std::endl << std::endl;
	Nini.signForm(lower_form);
	std::cout << lower_form << std::endl << std::endl;

	std::cout << std::endl;

	try 
	{
		Form f("TooLowSignGrade", 160, 1);
	} 
	catch (std::exception &e)
	{
		std::cout << "Can't create : Sign "<< e.what() << std::endl;
	}

	try 
	{
		Form f("TooHighNegativeSigneGrade", -1, 1);
	} 
	catch (std::exception &e)
	{
		std::cout << "Can't create : Sign "<< e.what() << std::endl;
	}

	try 
	{
		Form f("TooLowExecGrade", 1, 160);
	} 
	catch (std::exception &e)
	{
		std::cout << "Can't create : Exec "<< e.what() << std::endl;;
	}

	try 
	{
		Form f("TooHighZeroExecGrade", 1, 0);
	} 
	catch (std::exception &e)
	{
		std::cout << "Can't create : Exec "<< e.what() << std::endl;;
	}
	return (0);
}