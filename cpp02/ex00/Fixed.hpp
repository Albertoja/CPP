#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:

		int	_whole;
		static int const _bits = 8;
};

#endif
