#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _guardmode(false)
{
	_maxhp = 100;
	_maxep = 50;
	_hitpoints = _maxhp;
	_energypoints = _maxep;
	_attackdamage = 20;
	std::cout << "Activating VaultHunter.ExE " << _name;
	std::cout << " set to ScravTrap mode" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name), _guardmode(false)
{
	_maxhp = 100;
	_maxep = 50;
	_hitpoints = _maxhp;
	_energypoints = _maxep;
	_attackdamage = 20;
	std::cout << "Activating VaultHunter.EXE " << _name;
	std::cout << " set to ScavTrap mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "Copy new bot...";
	std::cout << "Hey every body! Im the new ScavTrap, designation : " << _name << std::endl;
	std::cout << std::endl;
}


ScavTrap::~ScavTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	std::cout << std::endl;
	std::cout << "ScavTrap mode unset" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_maxhp = other._maxhp;
		_maxep = other._maxep;
		_hitpoints = other._hitpoints;
		_energypoints = other._energypoints;
		_attackdamage = other._attackdamage;
		_guardmode = other._guardmode;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "Recompiling my combat code!";
	std::cout << std::endl << RED << _name << " attacks " << target << " causing ";
	std::cout << _attackdamage << " points of damage" << RESET << std::endl;
	std::cout << std::endl;
}

std::string	ScavTrap::getGuardmode(void) const
{
	if (_guardmode == false)
		return ("Deactivated");
	else
		return ("Activated");
}

void ScavTrap::guardGate()
{
	if (_guardmode == false)
	{
		_guardmode = true;
		std::cout << "I can do more than open doors sir!" << std::endl;
		std::cout << CYAN << "ScavTrap : " << _name << " has entered gate keeper mode" << RESET << std::endl;
	}
	else
	{
		_guardmode = false;
		std::cout << "A door?! I was MADE to open doors! ScavTrap " << std::endl;
		std::cout << CYAN << "ScavTrap : " << _name << " has left gate keeper mode" << RESET << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, const ScavTrap &scavtrap)
{
	std::cout << std::endl << "-------------------------------" << std::endl <<
		"ScavTrap name: " << scavtrap.getName() << std::endl <<
		"Hitpoints: " << scavtrap.getHitpoints() << std::endl <<
		"Energy Points: " << scavtrap.getEnergyPoints() << std::endl <<
		"Attack damage: " << scavtrap.getAttackDamage() << std::endl <<
		"Guardmode: " << scavtrap.getGuardmode() << std::endl <<
		"-------------------------------" << std::endl;
	return (out);
}
