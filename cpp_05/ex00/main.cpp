/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 05:21:11 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat a("A", 1);
	Bureaucrat d("D", 150);


	std::cout << a << std::endl;
	std::cout << d << std::endl;

	try 
	{
		a.incGrade();
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	try 
	{
		Bureaucrat b("B", 0);
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	try 
	{
		Bureaucrat c("B", 151);
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	try 
	{
		d.decGrade();
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	return (0);
}