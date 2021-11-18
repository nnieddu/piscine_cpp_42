/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacterClass.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:13:06 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:19:11 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTERCLASS_HPP
#define ICHARACTERCLASS_HPP

#include "iostream"

class AMateria;
class ICharacter
{
	public:
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual ~ICharacter() {}
};

#endif