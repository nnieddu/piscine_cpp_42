/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:18:54 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/22 14:06:49 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &src);
		virtual ~Brain();
		Brain &operator=(const Brain &src);
};

#endif
