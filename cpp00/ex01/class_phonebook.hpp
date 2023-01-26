#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "class_contact.hpp"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

class Contact;

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void);

	private:

		Contact	_phbook[8];
		int		_i;
};
#endif
