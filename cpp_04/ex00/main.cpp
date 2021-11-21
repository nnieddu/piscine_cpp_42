/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:47:53 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/21 08:30:40 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal *wrong = new WrongCat();

	std::cout << std::endl;
	std::cout << "Dog type      : " << dog->getType() << " " << std::endl;
	std::cout << "Cat type      : " << cat->getType() << " " << std::endl;
	std::cout << "WrongCat type : " << wrong->getType() << " " << std::endl;
	
	std::cout << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	wrong->makeSound();

	std::cout << std::endl;
	delete meta;
	delete cat;
	delete dog;
	delete wrong;

	return (0);
}

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// }