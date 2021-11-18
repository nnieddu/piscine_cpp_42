/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:25:38 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/27 18:09:47 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: virtual public Animal
{
    public:
        Dog();
        Dog(Dog const &copy);
        virtual ~Dog();
        virtual std::string getType() const;
        virtual void makeSound() const;

        Dog & operator=(Dog const &);
};

#endif