/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:35 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 13:20:25 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath> 
#include <cstdlib>
#include <climits>
#include <cstring>

void	toChar(double arg)
{
	std::cout << "char: ";
	if (arg < CHAR_MIN || arg > CHAR_MAX || std::isnan(arg))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (!isprint(static_cast<char>(arg)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(arg) << "'" << std::endl;
}

void	toInt(double arg)
{
	std::cout << "int: ";
	if (static_cast<int>(arg) > INT_MAX || static_cast<int>(arg) < INT_MIN || std::isnan(arg))
	{
		std::cout << "impossible" << std::endl; 
		return ;
	}
	std::cout << static_cast<int>(arg) << std::endl;	
}

void	toFloat(double arg) 
{
	std::cout << "float: ";
	if (static_cast<float>(arg) == HUGE_VAL)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(arg) << "f" << std::endl;
}

void	toDouble(double arg) 
{
	std::cout << "double: ";
	if (static_cast<double>(arg) == HUGE_VAL)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << arg << std::endl;
}

int	main(int ac, char **av)
{
	double arg = 0;
	
	if (ac == 2)
	{
		std::cout << arg << std::endl;
		arg = strtod(av[1], NULL);
		std::cout << arg;
		if (arg == 0)
		{
		 if (strlen(av[1]) > 1)
		 	arg = av[1][0];
		}
			toChar(arg);
			toInt(arg);
			toFloat(arg);
			toDouble(arg);
		}
		else
		{
			std::cerr << "Nothing, to convert, need arg !" << std::endl;
			return(-1);
		}
	return (0);
}