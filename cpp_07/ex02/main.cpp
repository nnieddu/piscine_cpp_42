/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 04:36:48 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 06:09:32 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

void intArray()
{
	Array<int> arr(3);
	Array<int> assign;

	for (unsigned int i = 0 ; i < arr.size() ; i++)
		arr[i] = i + 1;

	std::cout << "Original array : " << std::endl;
	for (unsigned int i = 0 ; i < arr.size() ; i++)
		std::cout << arr[i] << std::endl;

	Array<int> copy(arr);
	std::cout << "Copied : " << std::endl;
	for (unsigned int i = 0 ; i < copy.size() ; i++)
		std::cout << copy[i] << std::endl;

	assign = copy;
	std::cout << "Assigned : " << std::endl;
	for (unsigned int i = 0 ; i < assign.size() ; i++)
		std::cout << assign[i] << std::endl;
}

void stringArray() 
{
	const char *abc[3] = {"A", "B", "C"};
	Array<std::string> arr(3);
	Array<std::string> assign;

	for (unsigned int i = 0 ; i < arr.size() ; i++)
		arr[i] = abc[i];

	std::cout << "Original array :" << std::endl;
	for (unsigned int i = 0 ; i < arr.size() ; i++)
		std::cout << arr[i] << std::endl;

	Array<std::string> copy(arr);
	std::cout << "Copied :" << std::endl;
	for (unsigned int i = 0 ; i < copy.size() ; i++)
		std::cout << copy[i] << std::endl;

	assign = copy;
	std::cout << "Assigned :" << std::endl;
	for (unsigned int i = 0 ; i < assign.size() ; i++)
		std::cout << assign[i] << std::endl;
}

void emptyArray() 
{
	Array<int> arr;

	try
	{
		std::cout << arr[1] << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	int * a = new int();
	std::cout << *a << std::endl << std::endl;
	delete a;

	intArray();
	std::cout << std::endl;
	stringArray();
	std::cout << std::endl;
	emptyArray();
	return (0);
}


// #define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
