/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:46:31 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 19:11:52 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int	main(void)
{
	Bureaucrat	bur("Alan", 1);
	Form		form("form 28B", 10, 10);
	Form		form2("form 28C", 10, 10);

	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
	bur.signForm(form);
	bur.decrementGrade(10);
	bur.signForm(form2);
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
}
