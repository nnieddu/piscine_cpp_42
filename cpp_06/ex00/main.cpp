/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:35 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/24 17:48:15 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath> 
#include <ctgmath>
#include <cstdlib>

void	toChar(double arg)
{
	std::cout << "char: ";
	if (arg < CHAR_MIN || arg > CHAR_MAX || isnan(arg))
	{
		std::cout << "Impossible" << std::endl;
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
	if (static_cast<int>(arg) > INT_MAX || static_cast<int>(arg) < INT_MIN || isnan(arg))
	{
		std::cout << "Impossible" << std::endl; 
		return ;
	}	
	std::cout << static_cast<int>(arg) << std::endl;	
}

void	toFloat(double arg) 
{
	std::cout << "float: ";
	if (static_cast<float>(arg))
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

int		main(int ac, char *av[])
{
	double arg;

	if (ac == 2)
	{
		arg = strtod(av[1], NULL);
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