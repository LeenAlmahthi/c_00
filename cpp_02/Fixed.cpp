#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(Fixed &tmp)
{
	(void)tmp;
	std::cout << "Copy constructor called\n";
	this->fixed_point = tmp.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "destructor constructor called\n";
}
int    Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}
void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}
// Fixed &operator=Fixed::ft_Fixed(const Fixed &tmp)
Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << "Copy assignment operator called\n";

	if (this != &tmp)
	{
		this->fixed_point = tmp.getRawBits() ;	
	}
	return (*this);
}
