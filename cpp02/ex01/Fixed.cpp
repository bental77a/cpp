#include "Fixed.hpp"

Fixed::Fixed(){std::cout << "Default constructor called" <<std::endl;}
Fixed::~Fixed(){std::cout << "Destructor called" <<std::endl;}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" <<std::endl;
    this->_integer = n << this->_literal;
}
Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" <<std::endl;
    this->_integer = roundf(f * 256.0f);
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

float Fixed::toFloat( void ) const {return(this->_integer / 256.0f);}

int Fixed::toInt( void ) const {return(this->_integer >> this->_literal);}

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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    std::cout << "Copy assignment operator called" <<std::endl;
    os << obj.toFloat();
    return os;
}
