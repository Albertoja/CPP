/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:01:18 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 19:25:11 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class TestClass
{
	public:

		TestClass
    ( void ) : _n( 42 ) { return; }

		int get( void ) const { return this->_n; }

	private:

		int _n;
};

std::ostream & operator<<( std::ostream & o, TestClass const & rhs ) { o << rhs.get(); return o; }

template<typename T>
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 };
	TestClass tab2[5];
	std::string str[3] = {"Hello", "Bye", "Nice"};

	iter<int>( tab, 5, print );
	std::cout << std::endl;
	iter<TestClass>( tab2, 5, print );
	std::cout << std::endl;
	iter<std::string>(str, 3, print);
	return 0;
}
