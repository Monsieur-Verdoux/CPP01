/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:26:26 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/04 17:46:19 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "A nameless zombie has spawned!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " perishes!" << std::endl;
}

void	Zombie::give_name(std::string nm)
{
	name = nm;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}