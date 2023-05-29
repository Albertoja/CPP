#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::complain(std::string level)
{
	int	i = 0;
	std::string	complain[4];

	ptrf[0] = &Harl::debug;
	ptrf[1] = &Harl::info;
	ptrf[2] = &Harl::warning;
	ptrf[3] = &Harl::error;
	complain[0] = "DEBUG";
	complain[1] = "INFO";
	complain[2] = "WARNING";
	complain[3] = "ERROR";

	while(i < 4)
	{
		if (!complain[i].compare(level))
			break;
		i++;
	}

	switch(i)
	{
		case 0: debug();
		case 1: info();
		case 2: warning();
		case 3: error();
				break ;
		default: std::cout << "[ Probably complaining about ";
				std::cout << "insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don't put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming here for years and you just started ";
	std::cout << "working here last month..." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now...";
	std::cout << std::endl;
}
