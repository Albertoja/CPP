#include "class_phonebook.hpp"

PhoneBook::PhoneBook(void) : _i(0) {}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	if (_i >= 8)
		_i = 0;
	if (_phbook[_i].createcontact())
		_i++;
}

void	PhoneBook::search(void)
{
	int j;
	std::string	input;

	j = 1;
	if (!_phbook[0].checkcontact())
	{
		std::cout << "Error: the PhoneBook is empty!"<< std::endl << std::endl;
		return ;
	}
	std::cout << "Index|First Name| Last Name|  Nickname"<< std::endl;
	for (j = 1; j <= 8; j++)
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
}
