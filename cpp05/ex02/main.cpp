/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:46:31 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/20 19:14:50 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		Bureaucrat	bur("Bob", 140);
		ShrubberyCreationForm	form("home");

		bur.executeForm(form);
		bur.signForm(form);
		bur.executeForm(form);
		bur.incrementGrade(1);
		bur.executeForm(form);
		// bur.signForm(form);
		// bur.executeForm(form);
		// bur.incrementGrade(12);
		// bur.executeForm(form);
	}
	// std::cout << std::endl;
	// {
	// 	Bureaucrat	bur("Bob", 73);
	// 	RobotomyRequestForm	form("Jim");

	// 	bur.executeForm(form);
	// 	bur.signForm(form);
	// 	bur.incrementGrade(1);
	// 	bur.signForm(form);
	// 	bur.executeForm(form);
	// 	bur.incrementGrade(27);
	// 	bur.executeForm(form);
	// }
	// std::cout << std::endl;
	// {
	// 	Bureaucrat	bur("Bob", 26);
	// 	PresidentialPardonForm	form("Jim");

	// 	bur.executeForm(form);
	// 	bur.signForm(form);
	// 	bur.incrementGrade(1);
	// 	bur.signForm(form);
	// 	bur.executeForm(form);
	// 	bur.incrementGrade(20);
	// 	bur.executeForm(form);
	// }
}
