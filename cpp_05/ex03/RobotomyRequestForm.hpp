/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 06:39:54 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 09:16:22 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		void execute(const Bureaucrat &executor) const;
};

#endif