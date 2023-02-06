#include <iostream>

int main(void)
{
	std::string	string;
	std::string	*stringPTR;
	std::string	&stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::cout << "String address:                 " << &string << std::endl;
	std::cout << "String address through his ptr: " << stringPTR << std::endl;
	std::cout << "String address through his ref: " << &stringREF << std::endl;
	std::cout << "String through his ptr:         " << *stringPTR << std::endl;
	std::cout << "String through his ref:         " << stringREF << std::endl;
}
