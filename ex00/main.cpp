/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:39:49 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/14 18:56:42 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *ryan;

	ryan = newZombie("Ryan the Reanimated");
	ryan->announce();
	delete ryan;
	randomChump("Zlad the Zombie");
}
