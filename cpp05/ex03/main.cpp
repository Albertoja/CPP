/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:46:31 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/20 19:32:15 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern	intern;
	Form	*form;
	
	form = intern.makeForm("unknown", "unknown");
	std::cout << std::endl;
	{
		Bureaucrat	bur("Bob", 146);

		form = intern.makeForm("ShrubberyCreation", "home");
		std::cout << "----------" << std::endl;
		bur.executeForm(*form);
		bur.signForm(*form);
		bur.incrementGrade(1);
		bur.signForm(*form);
		bur.executeForm(*form);
		bur.incrementGrade(12);
		bur.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	{
		Bureaucrat	bur("Bob", 73);

		form = intern.makeForm("RobotomyRequest", "Jim");
		bur.executeForm(*form);
		bur.signForm(*form);
		bur.incrementGrade(1);
		bur.signForm(*form);
		bur.executeForm(*form);
		bur.incrementGrade(27);
		bur.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	{
		Bureaucrat	bur("Bob", 26);
		
		form = intern.makeForm("PresidentialPardon", "Jim");
		bur.executeForm(*form);
		bur.signForm(*form);
		bur.incrementGrade(1);
		bur.signForm(*form);
		bur.executeForm(*form);
		bur.incrementGrade(20);
		bur.executeForm(*form);
		delete form;
	}
}
