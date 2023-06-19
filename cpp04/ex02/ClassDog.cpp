/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:35:40 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/19 16:12:34 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassDog.hpp"

Dog::Dog(void) : Animal("dog"), _brain(new Brain)
{
	std::cout << "I'm a dog, Hello!" << std::endl;
}

Dog::Dog(const Dog &other) : _brain(new Brain(*other.getBrain()))
{
	_type = other._type;
	std::cout << "a clone " << _type << " appeared" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "You have killed a dog, bad human" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = other.getBrain();
	}
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau guau!!" << std::endl;
}
