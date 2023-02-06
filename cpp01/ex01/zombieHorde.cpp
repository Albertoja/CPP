#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int		i;

	horde = new Zombie[N];
	for (i = 0; i < N; i++)
		horde[i].zombiename(name);
	return (horde);
}
