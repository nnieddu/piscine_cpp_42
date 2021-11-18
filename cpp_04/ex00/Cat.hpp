/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:28:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/18 11:41:25 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: virtual public Animal
{
    public:
        Cat();
        Cat(Cat const &copy);
        virtual ~Cat();
        virtual std::string getType() const;
        virtual void makeSound() const;

        Cat & operator=(Cat const &);
};

class WrongCat : virtual public WrongAnimal
{
    public:
        WrongCat();
        virtual ~WrongCat();
        void makeSound() const;
};

#endif