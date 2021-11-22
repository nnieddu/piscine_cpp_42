/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:19:13 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:14:13 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int     main()
{
	// const AAnimal *Ani = new AAnimal();

	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();
	std::cout << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;
	
	AAnimal *animals[4];
	for (int i = 0 ; i < 4 ; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else 
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		delete animals[i];
	
	std::cout << std::endl;
	Dog *dogo = new Dog();
	Dog *deepc (dogo);
	delete dogo;
	(void)deepc;
	std::cout << std::endl;

	return (0);
}
