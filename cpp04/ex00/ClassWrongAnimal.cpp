/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:34:05 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:17 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassWrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("unknown wrong animal")
{
	std::cout << "I'm an unknown wrong animal, Hello! "<< std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
	if (_type.empty())
		_type = "unknown wrong animal";
	std::cout << "I'm a " << _type << ", Hello!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "This is weird...wrong animals can't replicate, but here I am...";
	std::cout << "a clone " << _type << " appeared" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "The wrong animal die? ok" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _type << " makes a wrong sound" << std::endl;
}

const std::string	WrongAnimal::getType(void) const
{
	return (_type);
}
