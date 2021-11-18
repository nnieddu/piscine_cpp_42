/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:23:37 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 15:27:42 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal( std::string );
        Animal(Animal const &);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        virtual std::string getType() const;

        Animal & operator=(Animal const &);
};

#endif