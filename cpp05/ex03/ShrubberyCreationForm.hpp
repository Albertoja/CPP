/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:51:26 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/20 19:29:44 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	public:

		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		void	execute(Bureaucrat const & executor) const;
		static Form	*newShrubbery(std::string const target);

	private:

		ShrubberyCreationForm(void);
};

#endif
