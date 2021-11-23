/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:49:35 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/23 20:06:04 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	ft_to_char(const char *s)
{
    
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
    {
        std::cout << ft_to_char(argv[1]) << std::endl;
        std::cout << ft_to_int(argv[1]) << std::endl;
        std::cout << ft_to_float(argv[1]) << std::endl;
        std::cout << ft_to_double(argv[1]) << std::endl;
    }
	return (0);
}