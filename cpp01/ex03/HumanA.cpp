/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:05:08 by aespinos          #+#    #+#             */
/*   Updated: 2023/02/20 18:08:53 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string hname, Weapon &tweapon) :
_name(hname), _weapon(tweapon){}

HumanA::~HumanA(void){}

void	HumanA::attack(void) const
{
	if (_name.empty())
		std::cout << "Unnamed HumanA attacks with ";
	else
		std::cout << _name << " attacks with ";
	if (_weapon.getType().empty())
		std::cout << "unknown weapon" << std::endl;
	else
		std::cout << _weapon.getType() << std::endl;
}
