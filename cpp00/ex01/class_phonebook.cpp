#include "class_phonebook.hpp"

PhoneBook::PhoneBook(void) : _i(0) {}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	if (_i == 8)
		_i = 0;
	if (_phbook[_i].createcontact())
		_i++;
}

void	PhoneBook::search(void)
{
	int j;
	std::string	input;

	std::cout << "Index|First Name| Last Name|  Nickname"<< std::endl;
	for (j = 1; j <= _i; j++)
	{
		std::cout << std::setw(5) << j << "|";
		_phbook[j - 1].printindex();
		std::cout << std::endl;
	}
	while(1)
	{
		if (!std::getline(std::cin, input))
			break ;
		int inp = atoi(input.c_str());
		if (inp >= 1 && inp <= 8)
			_phbook[inp - 1].printcontact();
		else
		{
			std::cout << "Bad Index\n"<< std::endl;
			break ;
		}
	}
	std::cout << "USE THESE COMMANDS: " << std::endl;
	std::cout << "-> ADD (TO ADD A CONTACT) \n-> SEARCH (TO SEARCH A CONTACT) \n-> EXIT (TO EXIT THE PROGRAM)\n" << std::endl;
}
