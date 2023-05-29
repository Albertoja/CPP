/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:03:06 by aespinos          #+#    #+#             */
/*   Updated: 2023/05/22 18:03:07 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{

	Zombie *NewZombie;

	NewZombie = new Zombie(name);
	NewZombie->announce();
	delete NewZombie;
}
