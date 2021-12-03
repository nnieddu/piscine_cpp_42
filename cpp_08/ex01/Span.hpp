/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:55:11 by ninieddu          #+#    #+#             */
/*   Updated: 2021/12/03 06:24:43 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <cstdlib>
#include <ctime>

class Span 
{
	private:
		unsigned int		_max_size;
		std::vector<int>	_container;
	public:
		virtual ~Span();
		Span(unsigned int n);
		Span(const Span &src);
		Span &operator=(const Span &src);

		void addNumber(int x);
		int shortestSpan();
		int longestSpan();

		void fill(int nbr);

		struct ContainerExceededException : public std::exception 
        {
			const char *what() const throw();
		};

		struct SpanNotFoundException : public std::exception 
        {
			const char *what() const throw();
		};
};

#endif