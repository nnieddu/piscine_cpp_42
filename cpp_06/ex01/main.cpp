/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:35 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 19:46:17 by ninieddu         ###   ########.fr       */
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

void	show_data(Data *data)
{
	std::cout << "Name   	: " << data->name << std::endl;
	std::cout << "School 	: " << data->school << std::endl;
	std::cout << "Data adr: " << data << std::endl << std::endl;
}

int	main()
{
	Data data = {"nini", 42};

	show_data(&data);
	deserialize(serialize(&data));
	show_data(&data);
	return (0);
}