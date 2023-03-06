#include "Fixed.hpp"

Fixed::Fixed(void) : _whole(0)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "operator called" << std::endl;
	if(this != &copy)
		_whole = copy.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const
{
	return(_whole);
}

void	Fixed::setRawBits(int const raw)
{
	_whole = raw;
}

