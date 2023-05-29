/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:03:20 by aespinos          #+#    #+#             */
/*   Updated: 2023/05/22 18:03:21 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::_total = 0;

Zombie::Zombie(void) : _i(++_total) {}

Zombie::Zombie(std::string ZombieName) : _name(ZombieName), _i(++_total) {}


Zombie::~Zombie(void)
{

	if (_name.empty())
		std::cout << "Unnamed zombie " << _i << ": DEAD...again?" << std::endl;
	else
		std::cout << _name << " " << _i << ": DEAD...again?" << std::endl;
	_total--;
}

void	Zombie::announce(void) const
{
	if (_name.empty())
		std::cout << "Unnamed zombie " << _i << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << _name << " " << _i << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::zombiename(std::string name)
{
	_name = name;
}
