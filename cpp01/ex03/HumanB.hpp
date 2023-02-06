#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string hname);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &tweapon);

	private:

		std::string	_name;
		Weapon		*_weapon;
};

#endif
