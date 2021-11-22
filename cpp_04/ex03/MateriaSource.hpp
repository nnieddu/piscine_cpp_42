/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:54:34 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:55:46 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MAX_SIZE 4

class MateriaSource : public IMateriaSource 
{
	private:
		AMateria	*_book[MAX_SIZE];
		int			_index;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &src);

		virtual void learnMateria(AMateria *materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif