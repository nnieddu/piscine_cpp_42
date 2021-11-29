/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 04:36:28 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/29 06:05:26 by ninieddu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>

template<typename T>
class Array 
{
	private:
		unsigned int	_size;
		T				*_items;
	public:
		Array() : _size(0), _items(NULL) {}
		Array(unsigned int n) : _size(n), _items(new T[n]()) {}

		virtual ~Array() {delete[] _items;}

        Array(const Array &src)
        {
			_size = src._size;
			_items = new T[_size];

			for (unsigned int i = 0 ; i < _size ; i++)
				_items[i] = src._items[i];
		}

        Array &operator=(const Array &src)
        {
			if (this == &src)
				return (*this);
			delete[] _items;
			_size = src._size;
			_items = new T[_size];

			for (unsigned int i = 0 ; i < _size ; i++)
				_items[i] = src._items[i];
			return (*this);
		}

		T &operator[](unsigned int i)
        {
			if (i >= _size)
				throw Array::Exception();
			return (_items[i]);
		}

		unsigned int size() const {
			return (_size);}

		struct Exception : std::exception {
		  const char* what() const throw() {return ("Error: i is out of the limits");}};
};

#endif