/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:13:00 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:13:01 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICECLASS_HPP
#define ICECLASS_HPP

#include "AMateriaClass.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string type);
		Ice(Ice const &copy);
		~Ice();

		Ice &operator=(Ice const &cpy);
		AMateria	*clone(void)const;
		void		use(ICharacter &target);
};

#endif