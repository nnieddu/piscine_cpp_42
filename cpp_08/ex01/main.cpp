/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:55:50 by ninieddu          #+#    #+#             */
/*   Updated: 2021/12/03 06:46:26 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span sp(5);

	sp.addNumber(5);

	try 
	{
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}
	
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest  : " << sp.longestSpan() << std::endl;

	try 
	{
		sp.addNumber(0);
	}
	catch (std::exception &e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}


	std::cout << std::endl;
	try 
	{
		sp.fill(1000000);
		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error : "<< e.what() << std::endl;
	}
	
	return (0);
}