/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:47 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:12:47 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURECLASS_HPP
#define CURECLASS_HPP

#include "AMateriaClass.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		Cure(Cure const &copy);
		~Cure();

		Cure		&operator=(Cure const &cpy);
		AMateria	*clone(void)const;
		void		use(ICharacter &target);
};

#endif