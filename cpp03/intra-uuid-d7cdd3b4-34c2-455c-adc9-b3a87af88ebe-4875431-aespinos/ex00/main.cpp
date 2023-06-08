/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:23:46 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/08 19:23:47 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap1;
	ClapTrap	clap2("Claptrappington");
	ClapTrap	clap3(clap1);

	std::cout << std::endl;
	clap1.attack("Claptrappington");
	clap2.takeDamage(clap1.getAttackDamage());
	clap2.beRepaired(3);
	clap2.attack("Claptrap");
	clap1.takeDamage(clap2.getAttackDamage());
	std::cout << clap2;
	std::cout << std::endl;
	return (0);
}
