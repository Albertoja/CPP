/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:55:18 by aespinos          #+#    #+#             */
/*   Updated: 2023/02/21 19:35:06 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB(void){}

void	HumanB::attack(void)
{
	if(_name.empty())
		std::cout << "Unnamed HumanB attack with ";
	else
		std::cout << _name << " attacks with ";
	if(!_weapon)
		std::cout << "bare hands" << std::endl;
	else if(_weapon->getType().empty())
		std::cout << "unknow weapon" << std::endl;
	else
		std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &tweapon)
{
	_weapon = &tweapon;
}
