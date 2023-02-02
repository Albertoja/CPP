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
		void	announce(void);
		void	zombiename(std::string ZombieName);

	private:

		std::string	_name;

};
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif
