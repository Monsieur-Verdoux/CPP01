/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:11:23 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/22 17:07:35 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char ** argv)
{
	Harl Harl;
	enum Level{DEBUG, INFO, WARNING, ERROR, INVALID};
	std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string called_level;
	Level lvl = INVALID;
	
	if (argc != 2)
	{
		std::cout << "Please provide a complaint level as a single argument" << std::endl;
		return (1);
	}
	called_level = argv[1];
	if (!(called_level.compare(complaints[0])))
		lvl = DEBUG;
	else if (!(called_level.compare(complaints[1])))
		lvl = INFO;
	else if (!(called_level.compare(complaints[2])))
		lvl = WARNING;
	else if (!(called_level.compare(complaints[3])))
		lvl = ERROR;
	switch (lvl)
	{
		case DEBUG:
			Harl.complain("DEBUG");
			Harl.complain("INFO");
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			return (0);
		case INFO:
			Harl.complain("INFO");
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			return (0);
		case WARNING:
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			return (0);
		case ERROR:
			Harl.complain("ERROR");
			return (0);
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return (1);
	}
}