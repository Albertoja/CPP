/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:03:00 by aespinos          #+#    #+#             */
/*   Updated: 2023/05/22 18:03:01 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void    leaks(void)
// {
//     system("leaks zombie");
// }

int	main()
{
	Zombie *zombie;

	//atexit(leaks);
	zombie = newZombie("Alan");
	zombie->announce();
	delete zombie;
	randomChump("Alan2");
}
