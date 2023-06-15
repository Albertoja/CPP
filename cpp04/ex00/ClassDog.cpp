/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:33:40 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:05 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassDog.hpp"

Dog::Dog(void) : Animal("dog")
{
	std::cout << "I'm a dog, Hello!" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "a clone " << _type << " appeared" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "You have killed a cat, bad human" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau guau!!" << std::endl;
}
