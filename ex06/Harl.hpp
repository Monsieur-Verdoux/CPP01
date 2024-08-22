/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:55:50 by akovalev          #+#    #+#             */
/*   Updated: 2024/08/22 15:45:48 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	typedef  void (Harl::*HarlMemFn)();
	private:
		void debug();
		void info();
		void warning();
		void error();
		HarlMemFn	functions[4] = {&Harl::debug, &Harl::info, &Harl:: warning, &Harl::error};
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif