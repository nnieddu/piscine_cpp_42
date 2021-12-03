/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 05:06:37 by ninieddu          #+#    #+#             */
/*   Updated: 2021/12/03 08:07:20 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> 
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &src){}
        virtual ~MutantStack() {}
        MutantStack &operator=(const MutantStack &src) 
        {
            std::stack<T>::operator=(src);
        }
    
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return std::stack<T>::c.begin();
        }
    
        iterator end()
        {
            return std::stack<T>::c.end();
        }
};

#endif