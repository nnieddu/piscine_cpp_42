/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 12:41:23 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 05:03:27 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
#define Character_HPP

#include "ICharacter.hpp"

class Character : public ICharacter 
{
	private:
		AMateria	*_inventory[INVENTORY_SIZE];
		int			_selection;
		std::string	_name;
	public:
		Character(const std::string &name);
		virtual ~Character();
		Character(const Character &src);
		Character &operator=(const Character &src);

		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif