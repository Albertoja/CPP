#include "class_contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

// Contact :: Contact(std::string first, std::string last, std::string nick, std::string phone, std::string dark)
// {
// 	_first_name = first;
// 	_last_name = last;
// 	_nickname = nick;
// 	_phone_number = phone;
// 	_darkest_secret = dark;
// }

void Contact :: search_info()
{
	std::cout << _first_name << "\n" << _last_name << "\n" << _nickname << "\n" << _phone_number << "\n" << _darkest_secret << std::endl;
	return ;
}

bool	Contact::createcontact(void)
{
	size_t	i = 0;

	std::cout << "Data of the new contact:\n\n";
	std::cout << "First Name: ";
	std::getline(std::cin, _first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, _last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, _nickname);
	while(1)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, _phone_number);
		i = 0;
		while(_phone_number[i])
		{
			if (!isdigit(_phone_number[i]))
				{
					std::cout << "\nERROR: only numbers please\n\n";
					break;
				}
			i++;
		}
		if (i >= strlen(_phone_number.c_str()))
			break;
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkest_secret);
	std::cout << "\n\n" << _nickname << " saved as a contact!\n\n" << std::endl;
	sleep(1);
	std::cout << "USE THESE COMMANDS: " << std::endl;
	std::cout << "-> ADD (TO ADD A CONTACT) \n-> SEARCH (TO SEARCH A CONTACT) \n-> EXIT (TO EXIT THE PROGRAM)\n" << std::endl;
	return (true);
}

bool	Contact::checkcontact(void)
{
	if (_first_name.empty())
		return (false);
	return (true);
}

void	Contact::printcontact(void)
{
	
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}

void	Contact::printindex(void)
{
	if (_first_name.length() > 10)
		std::cout << _first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _first_name << "|";
	if (_last_name.length() > 10)
		std::cout << _last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _last_name << "|";
	if (_nickname.length() > 10)
		std::cout << _nickname.substr(0, 9) << ".|";
	else
	std::cout << std::setw(10) << _nickname << "|";
	// std::cout << std::setw(10) << _phone_number << "|";
	// std::cout << std::setw(10) << _darkest_secret << "|";
}
