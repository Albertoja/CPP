/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:03:22 by aespinos          #+#    #+#             */
/*   Updated: 2023/05/22 18:03:23 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ZOMBIE_HPP
# define CLASS_ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <string>

class Zombie
{
	public:

		Zombie(void);
		Zombie(std::string ZombieName);
		~Zombie(void);
		void	announce(void) const;;
		void	zombiename(std::string ZombieName);

	private:

		static int	_total;
		std::string	_name;
		int			_i;

};
Zombie* zombieHorde( int N, std::string name );
#endif
