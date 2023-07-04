/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:41:44 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/27 18:41:45 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	int	n = 21;
	std::list<int>		lst;
	std::vector<int>	vec;
	std::list<int>::const_iterator		itls;
	std::vector<int>::const_iterator	itv;

	for(int i = 0; i < 22; i++)
		lst.push_back(i);
	for (int i = 20; i < 50; i++)
		vec.push_back(i);
	std::cout << "List test" << std::endl;
	try
	{
		itls = easyfind< std::list<int> >(lst, n);
		std::cout << "Number " << *itls << " found!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "Vector test" << std::endl;
	try
	{
		itv = easyfind< std::vector<int> >(vec, n);
		std::cout << "Number " << *itv << " found!" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
