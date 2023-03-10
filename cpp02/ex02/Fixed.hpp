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

		Fixed &operator=(const Fixed &other);

		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		int toInt(void) const;
		float toFloat(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);

		private:

			int		_value;
			static int const _nbits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif
