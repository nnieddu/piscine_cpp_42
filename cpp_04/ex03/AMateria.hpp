/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:55:53 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:18:50 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
#define AMateria_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);

		AMateria(const AMateria &rhs);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &rhs);

		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif