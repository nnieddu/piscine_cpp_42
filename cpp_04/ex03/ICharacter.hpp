/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:54:14 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:18:39 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICharacter_HPP
#define ICharacter_HPP

#include "AMateria.hpp"

#define INVENTORY_SIZE 4

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif