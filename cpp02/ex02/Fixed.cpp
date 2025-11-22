#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_integer = 0;
}
Fixed::~Fixed(){}

Fixed::Fixed(const int n)
{
    // std::cout << "Int constructor called" <<std::endl;
    this->_integer = n << this->_literal;
}
Fixed::Fixed(const float f)
{
    // std::cout << "Float constructor called" <<std::endl;
    this->_integer = roundf(f * 256.0f);
}
int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" <<std::endl;
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
    // std::cout << "Copy constructor called" <<std::endl;
    this->_integer = other._integer;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" <<std::endl;
    if (this != &other)
        this->_integer = other._integer; 
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    // std::cout << "Copy assignment operator called" <<std::endl;
    os << obj.toFloat();
    return os;
}

//-------------------------------------------------------------------//
//-------------------|           NEW             |-------------------//
//-------------------------------------------------------------------//



Fixed Fixed::operator+(const Fixed& other)
{
    Fixed res;
    res.setRawBits(this->_integer + other._integer);
    return (res);
}
Fixed Fixed::operator-(const Fixed& other)
{
    Fixed res;
    res.setRawBits(this->_integer - other._integer);
    return (res);
}
Fixed Fixed::operator*(const Fixed& other)
{
    Fixed res;
    res.setRawBits((this->_integer * other._integer) / 256);
    return (res);
}
Fixed Fixed::operator/(const Fixed& other)
{
    Fixed res;
    res.setRawBits((this->_integer * 256) / other._integer);
    return (res);
}




bool Fixed::operator<(const Fixed& other)
{
    return (this->_integer < other._integer);
}
bool Fixed::operator>(const Fixed& other)
{
    return (this->_integer > other._integer);
}
bool Fixed::operator>=(const Fixed& other)
{
    return (this->_integer >= other._integer);
}
bool Fixed::operator<=(const Fixed& other)
{
    return (this->_integer <= other._integer);
}
bool Fixed::operator!=(const Fixed& other)
{
    return (this->_integer != other._integer);
}
bool Fixed::operator==(const Fixed& other)
{
    return (this->_integer == other._integer);
}


//pre

Fixed& Fixed::operator++()
{
    this->_integer++;
    return(*this);
}
Fixed& Fixed::operator--()
{
    this->_integer--;
    return(*this);
}

//post
Fixed Fixed::operator--(int x)
{
    (void) x;
    Fixed res = *this;
    this->_integer--;
    return(res);
}
Fixed Fixed::operator++(int x)
{
    (void) x;
    Fixed res = *this;
    this->_integer++;
    return(res);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}
