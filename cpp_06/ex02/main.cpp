/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 07:15:57 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 21:33:00 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

int	main()
{
	Base *base = generate();
	Base *bad_base = new nini;

	identify(base);
	identify(*base);

	std::cout << std::endl;

	identify(bad_base);
	identify(*bad_base);
	
	delete base;
	delete bad_base;

	return (0);
}