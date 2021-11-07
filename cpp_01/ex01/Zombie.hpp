/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:40:42 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/07 23:55:19 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>
#include <sstream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void announce();
	void setName(std::string name, int i);

private:
	std::string _name;
};

Zombie *ZombieHorde(int N, std::string name);

#endif
