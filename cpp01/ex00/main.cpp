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
