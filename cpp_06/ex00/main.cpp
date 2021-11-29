/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:35 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 19:09:24 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath> 
#include <climits>
#include <cstring>


void	toChar(double arg)
{
	std::cout << "char: ";
	if (arg < CHAR_MIN || arg > CHAR_MAX || isnan(arg) || isinf(arg))
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
	if (arg > INT_MAX || arg < INT_MIN || isnan(arg))
	{
		std::cout << "impossible" << std::endl; 
		return ;
	}
	std::cout << static_cast<int>(arg) << std::endl;	
}

void	toFloat(double arg)
{
	std::cout << "float: ";
	if (arg == HUGE_VAL || arg == -HUGE_VAL || isinf(static_cast<float>(arg)))
		std::cout << "impossible" << std::endl;	
	else
		std::cout << static_cast<float>(arg) << "f" << std::endl;
}

void	toDouble(double arg) 
{
	std::cout << "double: ";
	if (arg == HUGE_VAL || arg == -HUGE_VAL)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << arg << std::endl;
}

int	main(int ac, char **av)
{
	double arg;

	if (ac == 2)
	{
		arg = strtod(av[1], NULL);
		if (arg == 0 && av[1] && isalpha(arg))
	 		arg = av[1][0];
		toChar(arg);
		toInt(arg);
		if (!strchr(av[1], '.'))
		{
			std::cout.setf(std::ios::fixed);
			std::cout.precision(1);
		}
		toFloat(arg);
		toDouble(arg);
	}
	else
	{
		std::cerr << "Nothing, to convert, need an arg !" << std::endl;
		return(-1);
	}
	return (0);
}