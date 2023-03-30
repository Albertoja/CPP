#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(const FragTrap &other);
		~FragTrap(void);

		FragTrap	&operator=(const FragTrap &other);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &out, const FragTrap &fragtrap);

#endif
