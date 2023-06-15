/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:34:48 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:55:03 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassCat.hpp"

Cat::Cat(void) : Animal("cat"), _brain(new Brain)
{
	std::cout << "I'm a cat, Hello!"<< std::endl;
}

Cat::Cat(const Cat &other) : _brain(new Brain(*other.getBrain()))
{
	_type = other._type;
	std::cout << "a clone " << _type << " appeared" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "You have killed a cat, good job" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = other.getBrain();
	}
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau miau!!" << std::endl;
}
