/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:35:08 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:42:04 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"

Animal::Animal(void) : _type("unknown animal")
{
	std::cout << "I'm an unknown animal. Hello!"<< std::endl;
}

Animal::Animal(std::string const type) : _type(type)
{
	if (_type.empty())
		_type = "unknown animal";
	std::cout << "I'm a " << _type << ". Hello!"<< std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "a clone " << _type << " appeared " << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "You have killed an animal, monster" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

const std::string	Animal::getType(void) const
{
	return (_type);
}
