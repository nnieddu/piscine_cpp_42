/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:42:22 by ninieddu          #+#    #+#             */
/*   Updated: 2021/11/08 09:07:29 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ft_error(std::string  str)
{
	std::cout << str << std::endl;
	return (1);
}

std::string	ft_edit_line(std::string line, std::string src, std::string dst)
{
	size_t	i = line.find(src);

	while (i != std::string::npos)
	{
		line.erase(i, src.length());
		line.insert(i, dst);
		i = line.find(src, i);
	}
	return (line);
}

int	ft_replace(std::string file_name, std::string s1, std::string s2)
{
	std::ifstream	og;
	std::ofstream	out;
	std::string		line;

	og.open(file_name.c_str());
	if (og.fail())
	{
		og.close();
		return (ft_error("Error : problem with input file"));	
	}
	out.open(file_name.append(".replace").c_str());
	if (out.fail())
	{
		out.close();
		return (ft_error("Error : problem with output file creation"));
	}
	while (std::getline(og, line))
	{
		out << ft_edit_line(line, s1, s2);
		out << std::endl;
	}
	og.close();
	out.close();
	return (0);
}

int	ft_check_args(int ac, char **av)
{
	if (ac != 4)
		return (ft_error("Error : not enough arguments"));
	if (!*av[2])
		return (ft_error("Error : First string is empty."));
	if (!*av[3])
		return (ft_error("Error : Second string is empty."));	
	return (0);
}

int main(int ac, char **av)
{
	if (ft_check_args(ac, av))
		return (1);
	if (ft_replace(av[1], av[2], av[3]))
		return (1);
	return (0);
}