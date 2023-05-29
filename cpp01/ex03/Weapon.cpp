/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:45:00 by aespinos          #+#    #+#             */
/*   Updated: 2023/02/20 17:45:01 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type) : _type(w_type) {}

Weapon::~Weapon(void){}

void	Weapon::setType(std::string w_type)
{
	_type = w_type;
}

std::string &Weapon::getType(void)
{
	return (_type);
}
