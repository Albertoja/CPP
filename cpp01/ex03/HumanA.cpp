#include "HumanA.hpp"

HumanA::HumanA(std::string hname, Weapon &tweapon) :
_name(hname), _weapon(tweapon){}

HumanA::~HumanA(void){}

void	HumanA::attack(void) const
{
	if (_name.empty())
		std::cout << "Unnamed HumanA attacks with his ";
	else
		std::cout << _name << " attacks with his ";
	if (_weapon.getType().empty())
		std::cout << "unknown weapon" << std::endl;
	else
		std::cout << _weapon.getType() << std::endl;
}
