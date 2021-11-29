/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 07:15:57 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 13:40:44 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int	main()
{
	Base *base = generate();
	Base *badBase = new nini;
	
	identify(base);
	identify(*base);

	std::cout << std::endl;

	identify(badBase);
	identify(*badBase);
	
	delete base;
	delete badBase;
	return (0);
}