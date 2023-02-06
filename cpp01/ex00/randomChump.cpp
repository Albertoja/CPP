#include "Zombie.hpp"

void randomChump(std::string name)
{

	Zombie *NewZombie;

	NewZombie = new Zombie(name);
	NewZombie->announce();
	delete NewZombie;
}
