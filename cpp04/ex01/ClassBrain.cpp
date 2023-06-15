/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:34:41 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:54:48 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassBrain.hpp"

Brain::Brain(void)
{
	std::cout << "Give brain to animal" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Wow, did you copy my brain? Or am I the copy?" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain dead" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
		copyIdeas(other._ideas);
	return (*this);
}

std::string	*Brain::getIdeas(void)
{
	return (_ideas);
}

void	Brain::copyIdeas(const std::string *ideas)
{
	int	i;

	for (i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
}

void	Brain::addIdeas(std::string idea)
{
	int	i;

	for (i = 0; i < 100; i++)
	{
		if (_ideas[i].empty())
		{
			_ideas[i] = idea;
			break;
		}
	}
	if (i == 100)
		std::cout << "Cant add more ideas" << std::endl;
	
}

void	Brain::printIdeas(void) const
{
	int	i;

	for (i = 0; i < 100; i++)
	{
		if (!_ideas[i].empty())
			std::cout << "Idea " << i + 1 << ": " << _ideas[i] << std::endl;
	}
}
