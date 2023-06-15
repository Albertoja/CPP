/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongCat.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:34:13 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:23 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassWrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("wrong cat")
{
	std::cout << "I'm a wrong cat, Hello! " << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "This is weird...wrong cats can't replicate, but here I am...";
	std::cout << "a clone " << _type << " appeared" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong cats die? ok" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat starts barking: Guau guau!!" << std::endl;
}
