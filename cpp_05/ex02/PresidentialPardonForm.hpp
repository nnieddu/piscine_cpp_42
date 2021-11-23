/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:39:54 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 09:56:26 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		void execute(const Bureaucrat &executor) const;
};

#endif