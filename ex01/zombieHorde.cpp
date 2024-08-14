/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:03:44 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/14 19:33:44 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return nullptr;
	Zombie *horde_of_zombies = new Zombie[N];
	for (int i = 0; i < N; ++i) 
	{
		horde_of_zombies[i].give_name(name);
	}
	return (horde_of_zombies);
}