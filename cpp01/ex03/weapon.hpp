#ifndef CLASS_WEAPON_HPP
# define CLASS_WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <string>

class Weapon
{
	public:

		Weapon(std::string wtype);
		~Weapon(void);

		void				setType(std::string wtype);
		std::string const	&getType(void) const;
	private:

		std::string	_type;
};




#endif
