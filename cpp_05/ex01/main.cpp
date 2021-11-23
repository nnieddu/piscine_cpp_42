/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:35:06 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 21:01:05 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int	main(void)
{
	Bureaucrat Nini("ninieddu", 100);
	Form too_high_form("Form 0B", 10, 10);
	Form too_low_form("Form 1B", 101, 100);
	Form form("Form 2B", 100, 100);

	Nini.signForm(form);
	Nini.signForm(too_high_form);
	Nini.signForm(too_low_form);

	std::cout << Nini << std::endl;
	std::cout << form << std::endl;
	std::cout << too_high_form << std::endl;
	std::cout << too_low_form << std::endl;

	try 
	{
		Form f("Form", 160, 1);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Form f("Form", -1, 1);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Form f("Form", 1, 160);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		Form f("Form", 1, -1);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}