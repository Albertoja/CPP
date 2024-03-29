#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:

		Intern(void);
		Intern(const Intern &other);
		~Intern(void);

		Intern	&operator=(const Intern &other);

		Form	*makeForm(std::string const formname, std::string const target) const;
};

#endif
