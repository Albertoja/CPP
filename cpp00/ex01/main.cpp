#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <unistd.h>
#include <stdlib.h>

int	main()
{
	class PhoneBook;
	std::string	input;

	std::cout << "WELCOME TO MY PHONEBOOK:" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	sleep(2);
	std::cout << "USE THESE COMMANDS: " << std::endl;
	std::cout << "-> ADD (TO ADD A CONTACT) \n-> SEARCH (TO SEARCH A CONTACT) \n-> EXIT (TO EXIT THE PROGRAM\n" << std::endl;
	while(1)
	{
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			std::cout << "añadir contacto\n";
			//PhoneBook.add
		}
		else if (!input.compare("SEARCH"))
			std::cout << "buscar contacto\n";
		else if (!input.compare("EXIT"))
			break;
	}

}
