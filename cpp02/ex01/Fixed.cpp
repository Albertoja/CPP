#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _value(num << _nbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value(roundf(num * (1 << _nbits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		_value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> Fixed::_nbits);
}

float	Fixed::toFloat(void) const
{
	return ((double)_value / (double)(1 << _nbits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	return (out << fixed.toFloat());
}
