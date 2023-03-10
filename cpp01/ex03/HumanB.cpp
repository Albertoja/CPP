#include "HumanB.hpp"

HumanB::HumanB(std::string hname) :
_name(hname), _weapon(NULL){}

HumanB::~HumanB(void){}

void	HumanB::attack(void) const
{
	if (_name.empty())
		std::cout << "Unnamed HumanB attacks with his ";
	else
		std::cout << _name << " attacks with his ";
	if (!_weapon)
		std::cout << "bare hands" << std::endl;
	else if (_weapon->getType().empty())
		std::cout << "unknown weapon" << std::endl;
	else
		std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &tweapon)
{
	_weapon = &tweapon;
}
