/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:47:43 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:15:04 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal 
{
    private:
        Brain *_brain;	
	public:
		Dog();
		Dog(const Dog &src);
		virtual ~Dog();
		Dog &operator=(const Dog &src);

		void makeSound() const;
};

#endif