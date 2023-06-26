/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:53:26 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 17:02:00 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	main(int argc, char **argv)
{
    std::string str;
	if (argc != 2)
	{
		std::cout << "Error. Number of arguments" << std::endl;
		return (1);
	}
    str = argv[1];
    if (str.empty())
		std::cout << "Error. Empty" << std::endl;
	else if (checkchar(str))
		charconversion(str[0]);
	else if (checkint(str))
		intconversion(str);
	else if (checkfloat(str))
		floatconversion(str);
	else if (checkdouble(str))
		doubleconversion(str);
	else
		std::cout << "Error. Non conversion possible" << std::endl;
	return (0);
}
