#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	//std::cout << "constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _value(num << _nbits)
{
	//std::cout << "int construcctor called" << std::endl;
}

Fixed::Fixed(const float num) : _value(roundf(num * (1 <<_nbits)))
{
	//std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	//std::cout << "destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	if(this != &other)
		_value = other.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &other) const
{
	return(_value < other._value);
}

bool Fixed::operator>(const Fixed &other) const
{
	return(_value > other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return(_value <= other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return(_value >= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return(_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return(_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed result;

	result._value = _value + other._value;
	return(result);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed result;

	result._value = _value - other._value;
	return(result);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed result;

	result._value = _value * other._value;
	return(result);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed result;

	result._value = _value / other._value;
	return(result);
}

Fixed	Fixed::operator++(void)
{
	_value++;

	return (*this);
}

Fixed	Fixed::operator++(int)
{

	Fixed	temp(*this);
	_value++;
	return(temp);
}

Fixed	Fixed::operator--(void)
{
	_value--;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	_value--;
	return(temp);
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return(a < b ? a : b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	return(a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return(a > b ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return(a > b ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	return (out << fixed.toFloat());
}


