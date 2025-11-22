#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" <<std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" <<std::endl;
    return(this->_integer);
}
void Fixed::setRawBits( int const raw )
{
    this->_integer = raw;
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" <<std::endl;
    this->_integer = other._integer;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" <<std::endl;
    if (this != &other)
        this->_integer = other._integer; 
    return (*this);
}
