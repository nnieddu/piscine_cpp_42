/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:39:21 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/07 11:37:10 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:
	Zombie(std::string name);
	~Zombie();
	void announce();

private:
	std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
