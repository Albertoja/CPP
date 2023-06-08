/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:23:49 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/08 19:23:50 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _maxhp(10), _maxep(10), _hitpoints(_maxhp), _energypoints(_maxep), _attackdamage(0)
{
	std::cout << "Claptrap -- start bootup sequence..." << std::endl;
	std::cout << "Hey every body! my name is " << YELLOW << _name << RESET << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _maxhp(10), _maxep(10), _hitpoints(_maxhp), _energypoints(_maxep), _attackdamage(0)
{
	if (_name.empty())
		_name = "ClapTrap";
	std::cout << "Claptrap -- start bootup sequence..." << std::endl;
	std::cout << "Hey every body! my name is " << YELLOW << _name << RESET << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "Copy new bot...";
	std::cout << "Hey every body! Im the new ClapTrap, designation : " << _name << std::endl;
	std::cout << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	std::cout << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energypoints = other._energypoints;
		_attackdamage = other._attackdamage;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;
	_energypoints--;
	std::cout << "Recompiling my combat code!";
	std::cout << std::endl << RED << _name << " attacks " << target << " causing ";
	std::cout << _attackdamage << " points of damage" << RESET << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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

std::string	ClapTrap::getName(void) const
{
	return(_name);
}

int	ClapTrap::getHitpoints(void) const
{
	return (_hitpoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (_energypoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (_attackdamage);
}

std::ostream	&operator<<(std::ostream &out, const ClapTrap &claptrap)
{
	std::cout << std::endl << "==================================" << std::endl;
	std::cout << "ClapTrap name: " << claptrap.getName() << std::endl;
	std::cout << "Hitpoints: " << claptrap.getHitpoints() << std::endl;
	std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << claptrap.getAttackDamage() << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << std::endl;
	return(out);
}

