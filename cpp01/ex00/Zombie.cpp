/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:03:09 by aespinos          #+#    #+#             */
/*   Updated: 2023/05/22 18:03:10 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string ZombieName) : _name(ZombieName) {}


Zombie::~Zombie(void)
{
	if (_name.empty())
		std::cout << "Unnamed" << ": DEAD...again?" << std::endl;
	else
		std::cout << _name << ": DEAD...again?" << std::endl;
}

void	Zombie::announce(void)
{
	if (_name.empty())
		std::cout << "Unnamed" << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::zombiename(std::string name)
{
	_name = name;
}
