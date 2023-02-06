#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string hname, Weapon &tweapon);
		~HumanA(void);

		void	attack(void) const;

	private:

		std::string	_name;
		Weapon		&_weapon;
};

#endif
