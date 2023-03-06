#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{

	public:

		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);
		~Fixed(void);

		Fixed	&operator=(const Fixed &other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:

		int _value;
		static int const _nbits = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
