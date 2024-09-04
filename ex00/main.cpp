/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:39:49 by akovalev          #+#    #+#             */
/*   Updated: 2024/09/04 17:45:32 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *ryan;

	ryan = newZombie("Ryan the Rancid");
	ryan->announce();
	delete ryan;
	randomChump("Finnan the Fetid");
}
