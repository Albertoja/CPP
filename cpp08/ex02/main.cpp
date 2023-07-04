/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:33:30 by aespinos          #+#    #+#             */
/*   Updated: 2023/07/04 18:43:33 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	std::cout << "USING MUTANTSTACK" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
		MutantStack<int>::iterator its = mstack.begin();
		MutantStack<int>::iterator ites = mstack.end();
		while (its != ites)
		{
			std::cout << *its << std::endl;
			++its;
		}
	}
	std::cout << std::endl << "USING LISTS" << std::endl;
	{
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
		std::list<int> s(list);
		std::list<int>::iterator its = list.begin();
		std::list<int>::iterator ites = list.end();
		while (its != ites)
		{
			std::cout << *its << std::endl;
			++its;
		}
	}
	return (0);
}
