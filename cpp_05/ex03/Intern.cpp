/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:36:01 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 10:52:13 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src) 
{
    (void)src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &src)
{
    if (this == &src)
		return (*this);
    return (*this);
}

// Form *Intern::makeForm(const std::string &formName, const std::string &target)
// {
// 	return NULL;
// }