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
