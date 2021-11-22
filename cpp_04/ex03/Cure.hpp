/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:44 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 03:59:28 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria 
{
	public:
		Cure();
		virtual ~Cure();
        Cure(const Cure &src);
        Cure &operator=(const Cure &src);

		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif