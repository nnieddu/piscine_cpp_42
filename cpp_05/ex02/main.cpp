/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:38:53 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 08:41:19 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"

int main()
{
	ShrubberyCreationForm form("maison");
	Bureaucrat nini("nini", 145);
	Bureaucrat phil("phil", 137);

	nini.executeForm(form);
	nini.signForm(form);
	nini.executeForm(form);
	phil.signForm(form);
	phil.executeForm(form);

	return (0);
}