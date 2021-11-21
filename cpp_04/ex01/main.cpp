/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:19:13 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 16:56:36 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	{
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		
		delete dog;
		delete cat;
	}
	{
		Animal *animals[4];

		for (int i = 0 ; i < 4 ; i++)
		{
			if (i < 2)
			{
				animals[i] = new Dog();
			} else {
				animals[i] = new Cat();
			}
		}

		for (int i = 0 ; i < 4 ; i++)
		{
			std::cout << "Animal type : " << animals[i]->getType() << std::endl;
		}
		for (int i = 0 ; i < 4 ; i++)
		{
			animals[i]->makeSound();
		}

		for (int i = 0 ; i < 4 ; i++)
		{
			delete animals[i];
		}
	}
	
	Dog dog;
	Dog ex(dog);
	return (0);
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// }