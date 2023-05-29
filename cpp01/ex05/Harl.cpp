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
			(this->*ptrf[i])();
		i++;
	}
}

void	Harl::debug(void)
{
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don't put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming here for years and you just started ";
	std::cout << "working here last month..." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now...";
	std::cout << std::endl;
}
