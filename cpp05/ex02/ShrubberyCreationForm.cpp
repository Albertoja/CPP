/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:51:28 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/19 18:26:56 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("ShrubberyCreationForm", 145, 137, "unknown") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
Form("ShrubberyCreationForm", 145, 137, other._target)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkexec(executor);
	std::cout << executor.getName() << " executes " << _name << std::endl;
	std::ofstream outfile ((this->getTarget() + "_shrubbery").c_str());
    outfile << "                    # #### ####          " << std::endl <<
               "                ### /#|### |/####        " << std::endl <<
               "               ##/#/ ||/##/_/##/_#       " << std::endl <<
               "             ###  /###|/ / # #####       " << std::endl <<
               "            ##__### | #/###_/_######     " << std::endl <<
               "           ## #### #  #| /  #### ##/##   " << std::endl <<
               "            __#_--###`#|{,###---###-~    " << std::endl <<
               "                        }{               " << std::endl <<
               "                       }}{               " << std::endl <<
               "                       }}{               " << std::endl <<
               "                       {{}               " << std::endl; 
    outfile.close();       
}                
