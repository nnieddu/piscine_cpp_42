/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:11 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:19:52 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERCLASS_HPP
#define CHARACTERCLASS_HPP

#include "ICharacterClass.hpp"
#include "AMateriaClass.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Character(void);
		Character(std::string name);
		Character(Character &copy);
		virtual ~Character(void);

		Character	&operator=(Character const &cpy);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif