/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:55:50 by ninieddu          #+#    #+#             */
/*   Updated: 2021/12/03 07:41:19 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int	main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl << std::endl;
	
	mstack.pop();

	std::cout << mstack.size() << std::endl << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// std::cout << std::endl << std::endl;

	// std::list<int> mstack_l;
	// mstack_l.push_back(5);
	// mstack_l.push_back(17);
	
	// // std::cout << mstack_l.top() << std::endl << std::endl;
	
	// // mstack_l.pop();

	// // std::cout << mstack_l.size() << std::endl << std::endl;
	
	// mstack_l.push_back(3);
	// mstack_l.push_back(5);
	// mstack_l.push_back(737);
	// mstack_l.push_back(0);
	
	// std::list<int>::iterator it_l = mstack_l.begin();
	// std::list<int>::iterator ite_l = mstack_l.end();

	// ++it_l;
	// --it_l;
	// while (it_l != ite_l)
	// {
	// 	std::cout << *it_l << std::endl;
	// 	++it_l;
	// }
	// std::stack<int> s(mstack_l);
	
	return 0;
}