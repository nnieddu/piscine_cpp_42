/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:05:28 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:13:46 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal 
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &src);

		const std::string &getType() const;
		virtual void makeSound() const = 0;
};

#endif
