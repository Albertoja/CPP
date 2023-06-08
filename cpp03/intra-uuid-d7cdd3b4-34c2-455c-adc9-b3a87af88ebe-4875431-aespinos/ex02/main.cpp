/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:24:09 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/08 19:25:52 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "Fragtrap.hpp"

int	main(void)
{
	{
		ClapTrap	clap1;
		ClapTrap	clap2("Claptrappington");
		ClapTrap	clap3(clap1);

		std::cout << std::endl;
		clap1.attack("Claptrappington");
		clap2.takeDamage(clap1.getAttackDamage());
		clap2.beRepaired(3);
		clap2.takeDamage(8);
		std::cout << clap2;
		std::cout << std::endl;
	}
	std::cout << std::endl << "////////////////////" << std::endl << std::endl;
	{
		ScavTrap	scav1;
		ScavTrap	scav2("Scavtrappington");
		ScavTrap	scav3(scav1);

		std::cout << std::endl;
		scav1.attack("Scavtrappington");
		scav2.takeDamage(scav1.getAttackDamage());
		scav2.beRepaired(10);
		std::cout << std::endl;
		scav2.guardGate();
		scav2.guardGate();
		std::cout << scav2;
		std::cout << std::endl;
	}
	std::cout << std::endl << "////////////////////" << std::endl << std::endl;
	{
		FragTrap	frag1;
		FragTrap	frag2("Fragtrappington");
		FragTrap	frag3(frag1);

		std::cout << std::endl;
		frag1.attack("Fragtrappington");
		frag2.takeDamage(frag1.getAttackDamage());
		frag2.beRepaired(5);
		std::cout << std::endl;
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		frag2.highFivesGuys();
		std::cout << frag2;
		std::cout << std::endl;
	}
	return (0);
}
