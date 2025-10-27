#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int fixed_point;
	static const int  bit_fixed = 8;
public:
	Fixed();
	Fixed(Fixed &tmp);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	// Fixed	operator=Fixed::&ft_Fixed(const Fixed &tmp);
	
	Fixed &operator=(const Fixed &other);
};


#endif