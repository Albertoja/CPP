/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:03:17 by aespinos          #+#    #+#             */
/*   Updated: 2023/05/22 18:03:18 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void    leaks(void)
// {
//     system("leaks zombie");
// }

int main(void)
{
	Zombie	*hzombie;
	int		i = 0;
	int		n;

	n = 8;
	hzombie= zombieHorde(n, "Alan");
	while(i < n)
	{
		hzombie[i].announce();
		i++;
	}
	delete [] hzombie;
}
