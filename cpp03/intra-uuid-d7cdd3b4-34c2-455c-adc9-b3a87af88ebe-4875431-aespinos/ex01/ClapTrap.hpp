/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:23:52 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/08 19:23:53 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

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

class ClapTrap
{
	public:

		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &other);

		std::string	getName(void) const;
		int	getHitpoints(void) const;
		int	getEnergyPoints(void) const;
		int	getAttackDamage(void) const;

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		
		std::string	_name;
		unsigned int	_maxhp;
		unsigned int	_maxep;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdamage;
};

std::ostream	&operator<<(std::ostream &out, const ClapTrap &claptrap);

#endif
