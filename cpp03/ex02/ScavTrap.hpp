#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

# define RESET				"\x1b[0m"
# define WHITE				"\x1b[1m"
# define GRAY				"\x1b[2m"
# define BLACK				"\x1b[30m"
# define RED				"\x1b[31m"
# define GREEN				"\x1b[32m"
# define YELLOW				"\x1b[33m"
# define BLUE				"\x1b[34m"
# define PURPLE				"\x1b[35m"
# define CYAN				"\x1b[36m"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap(void);

		ScavTrap	&operator=(const ScavTrap &other);

		std::string	getGuardmode(void) const;
		void	attack(std::string const &target);
		void	guardGate(void);

	private:
		
		bool _guardmode;
};

std::ostream	&operator<<(std::ostream &out, const ScavTrap &scavtrap);

#endif
