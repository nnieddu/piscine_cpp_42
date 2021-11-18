/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:05:18 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 15:12:14 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *tab[100];

	for (int i = 0; i <= 99; i++)
	{
		if (i % 2)
			tab[i] = new Dog;
		else
			tab[i] = new Cat;
	}
	for (int j = 0; j <= 99; j++)
	{
		delete tab[j];
	}

	std::cout << "\n=============Construction Dog============" << std::endl;

	Dog chien;
    
	std::cout << "\n=============Construction Copy Dog============" << std::endl;
	{
		Dog tmp = chien;
	}
    std::cout << "\n" << std::endl;
    return (0);
}