#include "weapon.hpp"

Weapon::Weapon(std::string wtype) : _type(wtype) {}

Weapon::~Weapon(void){}

void	Weapon::setType(std::string wtype)
{
	_type = wtype;
}

std::string const	&Weapon::getType(void) const
{
	return (_type);
}
