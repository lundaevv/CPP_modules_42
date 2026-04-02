#include <iostream>
#include "Fixed.hpp"

// int main(void)
// {
//     Fixed a(2);
//     Fixed b(4);
//     Fixed c(2.5f);
//     Fixed d(1.5f);

//     std::cout << std::boolalpha;

//     std::cout << "Initial values:" << std::endl;
//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
//     std::cout << "c = " << c << std::endl;
//     std::cout << "d = " << d << std::endl;

//     std::cout << "\nComparison operators:" << std::endl;
//     std::cout << "a > b: " << (a > b) << std::endl;
//     std::cout << "a < b: " << (a < b) << std::endl;
//     std::cout << "a >= c: " << (a >= c) << std::endl;
//     std::cout << "a <= c: " << (a <= c) << std::endl;
//     std::cout << "a == Fixed(2): " << (a == Fixed(2)) << std::endl;
//     std::cout << "a != b: " << (a != b) << std::endl;

//     std::cout << "\nArithmetic operators:" << std::endl;
//     std::cout << "a + b: " << (a + b) << std::endl;
//     std::cout << "b - a: " << (b - a) << std::endl;
//     std::cout << "c * d: " << (c * d) << std::endl;
//     std::cout << "b / a: " << (b / a) << std::endl;

//     std::cout << "\nIncrement / decrement:" << std::endl;
//     std::cout << "a: " << a << std::endl;
//     std::cout << "++a: " << ++a << std::endl;
//     std::cout << "a++: " << a++ << std::endl;
//     std::cout << "a after a++: " << a << std::endl;
//     std::cout << "--a: " << --a << std::endl;
//     std::cout << "a--: " << a-- << std::endl;
//     std::cout << "a after a--: " << a << std::endl;

//     std::cout << "\nMin / Max:" << std::endl;
//     std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
//     std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;

//     return 0;
// }

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
    
    return 0;
}