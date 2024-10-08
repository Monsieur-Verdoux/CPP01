/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:04:38 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/05 15:54:10 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	replace_strings(std::string filename, std::string s1, std::string s2)
{
	std::fstream	file(filename, std::ios::in);
	std::fstream	newfile;
	std::string		line;
	size_t			searching;
	
	if (!file.is_open())
	{
		std::cout << "Failure opening input file" << std::endl;
		return (1);
	}
	newfile.open(std::string(filename + ".replace"), std::ios::out);
	if (!newfile.is_open())
	{
		std::cout << "Failure opening output file" << std::endl;
		file.close();
		return (1);
	}
	while (std::getline(file, line))
	{
		searching = line.find(s1);
		while (searching != std::string::npos)
		{
			line.erase(searching, s1.length());
			line.insert(searching, s2);
			searching = line.find(s1, searching + s2.length());
		}
		newfile << line;
		if (!file.eof())
			newfile << std::endl;
	}
	file.close();
	newfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please use the following input format: <filename>, <string1>, <string2>" << std::endl;
		return (1);
	}
	else
	{
		if (!argv[2][0] || !argv[3][0])
		{
			std::cout << "Please ensure that strings are not empty" << std::endl;
			return (1);
		}
		else
		{
			if (replace_strings(argv[1], argv[2], argv[3]))
				return (1);
		}
	}
	return (0);
}