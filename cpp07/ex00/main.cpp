/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:59:43 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 19:20:16 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

class TestClass
{
	public:
	
	TestClass( int n ) : _n( n ) {}

	bool operator==( TestClass const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( TestClass const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( TestClass const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( TestClass const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( TestClass const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( TestClass const & rhs ) const { return (this->_n <= rhs._n); }

	int	getN(void) const { return (this->_n); }
	
	private:
	
	int _n;
};

std::ostream &operator<<(std::ostream &out, const TestClass &aw) { out << aw.getN(); return(out); }

int	main(void)
{
	{
		int		a = 0;
		int		b = 1;
		float	c = 2.0f;
		float	d = 3.0f;
		char	e = 'a';
		char	f = 'b';
		TestClass	aw(4);
		TestClass	aw2(5);

		std::cout << "Before swap: " << a << " " << b << std::endl;
		swap<int>(a,b);
		std::cout << "After swap: " << a << " " << b << std::endl;
		std::cout << "Min is: " << min<int>(a, b) << std::endl;
		std::cout << "Max is: " << max<int>(a, b) << std::endl;
		std::cout << std::endl;
		std::cout << "Before swap: " << c << " " << d << std::endl;
		swap<float>(c,d);
		std::cout << "After swap: " << c << " " << d << std::endl;
		std::cout << "Min is: " << min<float>(c, d) << std::endl;
		std::cout << "Max is: " << max<float>(c, d) << std::endl;
		std::cout << std::endl;
		std::cout << "Before swap: " << e << " " << f << std::endl;
		swap<char>(e,f);
		std::cout << "After swap: " << e << " " << f << std::endl;
		std::cout << "Min is: " << min<char>(e, f) << std::endl;
		std::cout << "Max is: " << max<char>(e, f) << std::endl;
		std::cout << std::endl;
		std::cout << "Before swap: " << aw.getN() << " " << aw2.getN() << std::endl;
		swap<TestClass>(aw,aw2);
		std::cout << "After swap: " << aw.getN() << " " << aw2.getN() << std::endl;
		std::cout << "Min is: " << min<TestClass>(aw, aw2) << std::endl;
		std::cout << "Max is: " << max<TestClass>(aw, aw2) << std::endl;
	}
}
