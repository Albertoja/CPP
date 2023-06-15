/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:33:27 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:53:51 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassCat.hpp"

Cat::Cat(void) : Animal("cat")
{
	std::cout << "I'm a cat, Hello!"<< std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "a clone " << _type << " appeared" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "You have killed a cat, good job" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau miau!!" << std::endl;
}
