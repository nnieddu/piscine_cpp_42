/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:41:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:41:55 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
	Weapon *weapon;
	std::string name;

	HumanB(std::string name);
	HumanB(std::string name, Weapon *weapon);
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
