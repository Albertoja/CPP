#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

class Contact
{
	public :

		Contact(void);
		~Contact(void);

		bool	createcontact(void);
		bool	checkcontact(void);
		void	printcontact(void);
		void	printindex(void);
		//Contact (std::string, std::string, std::string, std::string, std::string);
		void search_info();

	private :
		std::string _first_name ;
		std::string _last_name ;
		std::string _nickname ;
		std::string _phone_number ;
		std::string _darkest_secret ;
};
#endif
