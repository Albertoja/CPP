/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:24:06 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/08 19:27:22 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_maxhp = 100;
	_maxep = 100;
	_hitpoints = _maxhp;
	_energypoints = _maxep;
	_attackdamage = 30;
	std::cout <<  "Activating VaultHunter.EXE " << _name;
	std::cout << " set to FragTrap mode" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	_maxhp = 100;
	_maxep = 100;
	_hitpoints = _maxhp;
	_energypoints = _maxep;
	_attackdamage = 30;
	std::cout << "Activating VaultHunter.EXE " << _name;
	std::cout << " set to FragTrap mode" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "Copy...Hello! I am your new ";
	std::cout << " FragTrap bot: " << _name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap mode unset" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if(this != &other)
	{
		_name = other._name;
		_maxhp = other._maxhp;
		_maxep = other._maxep;
		_hitpoints = other._hitpoints;
		_energypoints = other._energypoints;
		_attackdamage = other._attackdamage;
	}
	return (*this);
}

void FragTrap::attack(std::string const &target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;
	_energypoints--;
	std::cout << "Recompiling my combat code!";
	std::cout << std::endl << RED << _name << " attacks " << target << " causing ";
	std::cout << _attackdamage << " points of damage" << RESET << std::endl;
	std::cout << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0)
		return ;
	if (_hitpoints < amount)
		_hitpoints = 0;
	else
		_hitpoints -= amount;
	std::cout << "Why do I even feel pain?!";
	std::cout << std::endl << PURPLE << _name << " recevies " << amount << " of damage" << RESET << std::endl;
	std::cout << "hp : " << _hitpoints << " / " << _maxhp << std::endl;
	std::cout << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;
	_energypoints--;
	if (_hitpoints + amount > _maxhp)
		_hitpoints = _maxhp;
	else
		_hitpoints += amount;
	std::cout << "Health! Ooo, what flavor is red?" << std::endl;
	std::cout << GREEN << _name << " was repaired " << amount << " hitpoints" << RESET << std::endl;
	std::cout << "hp : " << _hitpoints << " / " << _maxhp << std::endl;
	std::cout << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;
	_energypoints--;
	std::cout << _name << " hand waiting for you" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const FragTrap &fragtrap)
{
	std::cout << std::endl << "-------------------------------" << std::endl;
	std::cout << "FragTrap name: " << fragtrap.getName() << std::endl;
	std::cout << "Hitpoints: " << fragtrap.getHitpoints() << std::endl;
	std::cout << "Energypoints: " << fragtrap.getEnergyPoints() << std::endl;
	std::cout << "Attackdamage: " << fragtrap.getAttackDamage() << std::endl;
	std::cout <<"-------------------------------" << std::endl;
	return (out);
}
