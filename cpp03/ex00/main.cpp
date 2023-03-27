#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap1;
	ClapTrap	clap2("Claptrappington");
	ClapTrap	clap3(clap1);

	std::cout << std::endl;
	clap1.attack("Jack");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	clap2.takeDamage(8);
	std::cout << clap2;
	std::cout << std::endl;
	return (0);
}
