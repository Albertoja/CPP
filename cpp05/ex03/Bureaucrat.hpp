/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:37:11 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/19 17:51:56 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:

		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &other);

		std::string	getName(void) const;
		int			getGrade(void) const;

		void	incrementGrade(int n);
		void	decrementGrade(int n);
		void	signForm(Form &form);
		void	executeForm(Form const &form);

	private:

		Bureaucrat(void);
		const std::string	_name;
		int					_grade;

		class GradeTooHighException: public std::exception
		{
			public:

				const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:

				const char* what(void) const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
