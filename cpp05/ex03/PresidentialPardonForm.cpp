/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:50:36 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/20 19:28:59 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
Form("PresidentialPardonForm", 25, 5, "unknown") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5, other._target)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkexec(executor);
	std::cout << executor.getName() << " executes " << _name << std::endl;
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

Form	*PresidentialPardonForm::newPresidential(std::string const target)
{
	return (new PresidentialPardonForm(target));
}
