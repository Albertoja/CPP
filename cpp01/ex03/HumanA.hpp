/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:05:28 by aespinos          #+#    #+#             */
/*   Updated: 2023/02/20 19:37:09 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

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
