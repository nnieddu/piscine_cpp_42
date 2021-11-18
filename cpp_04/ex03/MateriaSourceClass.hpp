/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:13:28 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 17:18:56 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCECLASS_HPP
#define MATERIASOURCECLASS_HPP

#include "ICharacterClass.hpp"
#include "AMateriaClass.hpp"
#include "IMateriaSourceClass.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_inv[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource &copy);
		virtual ~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &cpy);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif