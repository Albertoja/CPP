#include "Fragtrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_maxhp = 100;
	_maxep = 100;
	_hitpoints = _maxhp;
	_energypoints = _maxep;
	_attackdamage = 30;
	std::cout <<  "Activating VaultHunter.EXE " << _name;
	std::cout << " set to FragTrap mode" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	_maxhp = 100;
	_maxep = 100;
	_hitpoints = _maxhp;
	_energypoints = _maxep;
	_attackdamage = 30;
	std::cout << "Activating VaultHunter.EXE " << _name;
	std::cout << " set to FragTrap mode" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "Copy...Hello! I am your new ";
	std::cout << " FragTrap bot: " << _name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap mode unset" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if(this != &other)
	{
		_name = other._name;
		_maxhp = other._maxhp;
		_maxep = other._maxep;
		_hitpoints = other._hitpoints;
		_energypoints = other._energypoints;
		_attackdamage = other._attackdamage;
	}
	return (*this);
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "Recompiling my combat code!";
	std::cout << std::endl << RED << _name << " attacks " << target << " causing ";
	std::cout << _attackdamage << " points of damage" << RESET << std::endl;
	std::cout << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << _name << " hand waiting for you" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const FragTrap &fragtrap)
{
	std::cout << std::endl << "-------------------------------" << std::endl;
	std::cout << "FragTrap name: " << fragtrap.getName() << std::endl;
	std::cout << "Hitpoints: " << fragtrap.getHitpoints() << std::endl;
	std::cout << "Energypoints: " << fragtrap.getEnergyPoints() << std::endl;
	std::cout << "Attackdamage: " << fragtrap.getAttackDamage() << std::endl;
	std::cout <<"-------------------------------" << std::endl;
	return (out);
}
