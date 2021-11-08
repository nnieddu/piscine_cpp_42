/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:43:25 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 10:39:50 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>

int main(int ac, char **av)
{
    Karen   karenFiltered;

    if (ac != 2)
    {
        std::cout << "Error : need just one string argument" << std::endl;
        return (1);
    }
	karenFiltered.complain(av[1]);
	return (0);
}