#include <iostream>
#include <stdio.h>
#include <cstdio>

int	main(int argc, char **argv)
{
	int	cont[2];

	cont[0] = 1;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[cont[0]])
		{
			cont[1] = 0;
			while (argv[cont[0]][cont[1]])
			{
				putchar(toupper(argv[cont[0]][cont[1]]));
				cont[1]++;
			}
			cont[0]++;
		}
		std::cout << std::endl;
	}
}
