/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:48:38 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 14:10:37 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FewFt.hpp"

int		main()
{
	int a = 4;
	int b = 2;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
	std::cout << "min = " << ::min(a, b) << std::endl;
	std::cout << "max = " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	std::string c = "sample A";
	std::string d = "sample B";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;
	std::cout << "min = " << ::min(c, d) << std::endl;
	std::cout << "max = " << ::max(c, d) << std::endl;

	return (0);
}
