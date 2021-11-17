/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:59:53 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/17 18:34:04 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
protected:
	std::string _name;

public:
	Animal();
	Animal(std::string name);
	Animal(const Animal &copy);
	virtual ~Animal();

 	unsigned int const &getHP() const;
	
	Animal& operator=(const Animal &copy);

};

#endif
