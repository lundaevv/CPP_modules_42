#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

// converts the int value to the corresponding fixed-point value
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;

    // shifting left by n bits is the same as <value * 2^n>:
    _value = value << _fractionalBits;
}

// converts the float value to the corresponding fixed-point value
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;

    // bit shifting only works on integral parts (here value is a float)
    // 1 shifted left by n bits is the same as <1 * 2^n> meaning <value * (1 * 2^n)>
    // roundf rounds a float to the nearest integer (but return a float)
    _value = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    //_value = other._value; - this would be better without using coppy assignment operator inside copy constructor
    *this = other; // this is for the task since copy constructor call prints also the copy assignment message
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

// converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const
{
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

// converts the fixed-point value to an integer value
int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
