/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:24:07 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/08 19:24:08 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &out, const FragTrap &fragtrap);

#endif
