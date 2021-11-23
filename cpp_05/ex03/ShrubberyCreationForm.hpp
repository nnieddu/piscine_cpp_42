/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:39:54 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 09:16:29 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form 
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		void execute(const Bureaucrat &executor) const;
};

#endif