/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 07:15:26 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 13:38:44 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <cstdlib>

class Base 
{
	public:
		virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

class nini : public Base {};

Base *generate(void);

void identify(Base * p);
void identify(Base & p);

#endif