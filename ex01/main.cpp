/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:04:10 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/20 18:28:48 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde_of_zombies;
	
	horde_of_zombies = zombieHorde(10, "Gravecrawler");
	for (int i = 0; i < 10; ++i)
	{
		horde_of_zombies[i].announce();
	}
	delete[] horde_of_zombies;
}