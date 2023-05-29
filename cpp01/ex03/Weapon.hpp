#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:

		Weapon(std::string w_type);
		~Weapon(void);
		std::string	&getType(void);
		void	setType(std::string w_type);

	private:

		std::string	_type;

};
#endif
