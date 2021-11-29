/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 07:10:07 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/28 21:37:48 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

Base::~Base()
{
}

Base *generate(void)
{
   	int nbr;

   	srand(time(0));
	nbr = rand()%3;
	if (nbr == 0)
    {
        std::cout << "Class A" << std::endl << std::endl;
		return (new A);
    }
	if (nbr == 1)
    {
        std::cout << "Class B" << std::endl << std::endl;
		return (new B);
    }
    std::cout << "Class C" << std::endl << std::endl;
    return (new C);
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p) != NULL)
    {
		std::cout << "A" << std::endl;
        return ;
	}
    if (dynamic_cast<B*>(p) != NULL)
    {
		std::cout << "B" << std::endl;
        return ;
	} 
    if (dynamic_cast<C*>(p) != NULL)
    {
		std::cout << "C" << std::endl;
        return ;
	}
	std::cerr << "Error." << std::endl;
}

void identify(Base & p)
{
	try
    {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
        return ;
	}
    catch (std::exception &e)
    {
    }
	try 
    {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
        return ;
	}
    catch (std::exception &e)
    {
    }
    try 
    {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
        return ;
	}
    catch (std::exception &e)
    { 
    }
	std::cerr << "Error." << std::endl;
}