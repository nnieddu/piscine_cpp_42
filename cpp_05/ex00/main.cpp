/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 18:35:50 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat nini("Nini", 1);
	Bureaucrat dumbNini("dumbNini", 150);

	std::cout << std::endl;

	try 
	{
		std::cout << nini << "       Try to upgrade : ";
		nini.UpGrade();
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try 
	{
		std::cout << dumbNini << " Try to downgrade : ";
		dumbNini.DownGrade();
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

		std::cout << std::endl;

	try 
	{
		std::cout << "Try to create bureaucrat with grade 0 : ";
		Bureaucrat Zero("Zero", 0);
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try 
	{
		std::cout << "Try to modify bureaucrat grade to 151 : ";
		Bureaucrat dumbNini("VeryDnini", 151);
	} 
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	Bureaucrat Employe;
	std::cout << Employe << std::endl;
	Employe.UpGrade();
	std::cout << Employe << std::endl;
	Employe.DownGrade();
	std::cout << Employe << std::endl;

	return (0);
}
