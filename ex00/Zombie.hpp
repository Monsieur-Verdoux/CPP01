/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:26:37 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/28 19:20:27 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		void	announce();
		void	give_name(std::string nm);
		Zombie();
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
