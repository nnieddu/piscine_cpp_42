/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 04:36:48 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 14:53:21 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

void subjectTest()
{
	int * a = new int();
	std::cout << *a << std::endl << std::endl;
	delete a;
}

void intArray()
{
	Array<int> intArray(3);
	for (unsigned int i = 0 ; i < intArray.size() ; i++)
		intArray[i] = i + 1;

	std::cout << "Original array : " << std::endl;
	for (unsigned int i = 0 ; i < intArray.size() ; i++)
		std::cout << intArray[i] << std::endl;

	Array<int> copy(intArray);
	std::cout << "Copied : " << std::endl;
	for (unsigned int i = 0 ; i < copy.size() ; i++)
		std::cout << copy[i] << std::endl;

	Array<int> assign;
	assign = copy;
	std::cout << "Assigned : " << std::endl;
	for (unsigned int i = 0 ; i < assign.size() ; i++)
		std::cout << assign[i] << std::endl;
}

void stringArray() 
{
	Array<std::string> stringArray(3);
	for (unsigned int i = 0 ; i < stringArray.size() ; i++)
		stringArray[i] = 'A' + i;

	std::cout << "Original array :" << std::endl;
	for (unsigned int i = 0 ; i < stringArray.size() ; i++)
		std::cout << stringArray[i] << std::endl;

	Array<std::string> copy(stringArray);
	std::cout << "Copied :" << std::endl;
	for (unsigned int i = 0 ; i < copy.size() ; i++)
		std::cout << copy[i] << std::endl;

	Array<std::string> assign;
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
	subjectTest();
	std::cout << std::endl;

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
