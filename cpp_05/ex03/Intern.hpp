/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:35:29 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 10:52:21 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern 
{
	private:
	public:
		Intern();
        Intern(const Intern &src);
		virtual ~Intern();
        Intern &operator=(const Intern &src);

		// Form *makeForm(const std::string &formName, const std::string &target);
};

#endif