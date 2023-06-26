/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:19:35 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/19 18:52:59 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bur("Alan", 140);
	
	std::cout << bur << std::endl;
	try
	{
		bur.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bur << std::endl;
	try
	{
		bur.incrementGrade(130);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bur << std::endl;
	try
	{
		bur.incrementGrade(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bur << std::endl;
	try
	{
		Bureaucrat	bur2("Mario", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	bur2("Mario", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
