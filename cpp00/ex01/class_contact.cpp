#include "class_contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

bool	ft_error(std::string str)
{
	std::cout << "ERROR: ";
	std::cout << str << std::endl << std::endl;
	return(false);
}

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
	if (!std::getline(std::cin, _first_name) || !_first_name[0])
		return(ft_error("you can't leave it empty"));
	std::cout << "Last Name: ";
	if (!std::getline(std::cin, _last_name) || !_last_name[0])
		return(ft_error("you can't leave it empty"));
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, _nickname) || !_nickname[0])
		return(ft_error("you can't leave it empty"));
	while(1)
	{
		std::cout << "Phone Number: ";
		if(!std::getline(std::cin, _phone_number) || !_phone_number[0])
			return(ft_error("you can't leave it empty"));
		i = 0;
		while(_phone_number[i])
		{
			if (!isdigit(_phone_number[i]))
				{
					std::cout << "\nERROR: only numbers please\n";
					break ;
				}
			i++;
		}
		if (i >= strlen(_phone_number.c_str()))
			break ;
	}
	std::cout << "Darkest Secret: ";
	if (!std::getline(std::cin, _darkest_secret) || !_darkest_secret[0])
		return(ft_error("you can't leave it empty"));
	std::cout << "\n\n" << _nickname << " saved as a contact!\n\n" << std::endl;
	sleep(1);
	return (true) ;
}

bool	Contact::checkcontact(void)
{
	if (_first_name.empty())
		return (false);
	return (true) ;
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
}
