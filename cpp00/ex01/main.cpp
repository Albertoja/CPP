#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include "class_contact.hpp"
#include "class_phonebook.hpp"


int	main()
{
	PhoneBook Phone;

	std::string	input;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "WELCOME TO MY PHONEBOOK:" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	sleep(1);
	std::cout << "USE THESE COMMANDS: " << std::endl;
	std::cout << "-> ADD (TO ADD A CONTACT) \n-> SEARCH (TO SEARCH A CONTACT) \n-> EXIT (TO EXIT THE PROGRAM)\n" << std::endl;
	while(1)
	{
		if (!std::getline(std::cin, input))
			break ;
		if (!input.compare("ADD"))
			Phone.add();
		else if (!input.compare("SEARCH"))
		{
			std::cout << "Contacts: \n\n";
			Phone.search();
		}
		else if (!input.compare("EXIT"))
			break;
		else
			std::cout << "Error\n";
	}
}
