/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:35 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 16:11:41 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data 
{
	const char	*name;
	int			school;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data data = {"nini", 42};

	std::cout << "Name   	: " << data.name << std::endl;
	std::cout << "School 	: " << data.school << std::endl;
	std::cout << "Data adr: " << &data << std::endl << std::endl;
	
	std::cout << std::endl << "Raw data: " << serialize(&data) << std::endl << std::endl;
	data = *deserialize(serialize(&data));

	std::cout << "Name   	: " << data.name << std::endl;
	std::cout << "School 	: " << data.school << std::endl;
	std::cout << "Data adr: " << &data << std::endl << std::endl;

	return (0);
}