/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:47:47 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 16:31:35 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	virtual ~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& copy);

	void whoAmI();
	void attack(std::string const & target);
	virtual void guardGate();
	virtual void highFivesGuys(void);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);	
};

#endif
