#include "ScavTrap.hpp"
#include "Fragtrap.hpp"

int	main(void)
{
	{
		ClapTrap	clap1;
		ClapTrap	clap2("Claptrappington");
		ClapTrap	clap3(clap1);

		std::cout << std::endl;
		clap1.attack("Badass");
		clap2.takeDamage(5);
		clap2.beRepaired(3);
		clap2.takeDamage(8);
		std::cout << clap2;
		std::cout << std::endl;
	}
	std::cout << std::endl << "////////////////////" << std::endl << std::endl;
	{
		ScavTrap	scav1;
		ScavTrap	scav2("Scavtrappington");
		ScavTrap	scav3(scav1);

		std::cout << std::endl;
		scav1.attack("Badass");
		scav2.takeDamage(5);
		scav2.beRepaired(3);
		std::cout << std::endl;
		scav2.guardGate();
		scav2.guardGate();
		std::cout << scav2;
		std::cout << std::endl;
	}
	std::cout << std::endl << "////////////////////" << std::endl << std::endl;
	{
		FragTrap	frag1;
		FragTrap	frag2("Fragtrappington");
		FragTrap	frag3(frag1);

		std::cout << std::endl;
		frag1.attack("Badass");
		frag2.takeDamage(5);
		frag2.beRepaired(3);
		std::cout << std::endl;
		frag2.highFivesGuys();
		std::cout << frag2;
		std::cout << std::endl;
	}
	return (0);
}
