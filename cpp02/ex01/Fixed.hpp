#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int _integer;
        static const int _literal = 8; 
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float f);
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif