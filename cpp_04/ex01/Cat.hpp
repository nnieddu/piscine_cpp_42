/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:28:55 by ninieddu          #+#    #+#             */
/*   Updated: 2021/10/28 13:39:18 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
    private:
        Brain* ideas;

    public:
        Cat();
        Cat(Cat const &);
        virtual ~Cat();
        virtual std::string getType() const;
        virtual void makeSound() const;

        Cat & operator=(Cat const &);
};

#endif