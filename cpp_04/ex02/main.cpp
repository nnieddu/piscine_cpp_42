/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:19:13 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 11:30:18 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	// const Animal *ani = new Animal();
	
	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;

	return (0);
}