/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:50 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 03:49:54 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria 
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);

		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif