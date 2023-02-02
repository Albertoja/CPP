#include "Zombie.hpp"

int	main()
{
	Zombie *zombie;


	zombie = newZombie("Alan");
	zombie->announce();
	delete zombie;
	zombie = new Zombie;
	zombie->announce();
	delete zombie;
	randomChump("Alan2");
	Zombie Zombstack;
	Zombstack.zombiename("Alan3");
	Zombstack.announce();
}
