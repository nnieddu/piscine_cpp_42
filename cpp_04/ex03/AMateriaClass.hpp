/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:11:08 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:11:21 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIACLASS_HPP
#define AMATERIACLASS_HPP

#include "ICharacterClass.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &cpy);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

};

#endif