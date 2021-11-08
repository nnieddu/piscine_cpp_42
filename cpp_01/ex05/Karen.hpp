/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:43:02 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 10:21:47 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
public:
	Karen();
	~Karen();
	void complain(std::string level);
	
private:
	void (Karen::*f[4])(void);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
