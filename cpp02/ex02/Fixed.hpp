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


        //Comparison
        bool operator<(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator!=(const Fixed& other);
        bool operator==(const Fixed& other);
        


        //Arithmetic

        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);


        //Increment/Decrement

        Fixed& operator++();
        Fixed& operator--();

        Fixed operator--(int x);
        Fixed operator++(int x);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);


        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif