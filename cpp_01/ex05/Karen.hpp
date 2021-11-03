/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:43:02 by ninieddu          #+#    #+#             */
/*   Updated: 2021/08/31 14:43:03 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
private:
	typedef void	(Karen::* f)();
	struct	commentType_
	{
		std::string const	name;
		f const				func;
	};
	static const commentType_	commentTypeList_[];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Karen();
	~Karen();
	void complain(std::string level);
};

#endif
