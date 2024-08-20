/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:55:30 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/20 20:16:51 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(std::string weapon_type)
{
	type = weapon_type;
}
Weapon::~Weapon()
{
	
}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}