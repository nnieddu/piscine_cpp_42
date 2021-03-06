/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:18:51 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 12:34:50 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain default constructor" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = std::string();
}

Brain::Brain(const Brain &src) 
{
    std::cout << "Brain copy constructor" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = src._ideas[i];
}

Brain &Brain::operator=(const Brain &src) 
{
    std::cout << "Brain assignation" << std::endl;
    if (&src == this)
        return (*this);
    for (int i = 0 ; i < 100 ; i++)
        _ideas[i] = src._ideas[i];
    return (*this);
}

Brain::~Brain() 
{
    std::cout << "Brain destructor" << std::endl;
}
