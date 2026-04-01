#include <iostream>
#include "Fixed.hpp"

// int main(void)
// {
//     Fixed a;
//     Fixed const b(10);
//     Fixed const c(42.42f);
//     Fixed const d(b);

//     a = Fixed(1234.4321f);

//     std::cout << "a is " << a << std::endl;
//     std::cout << "b is " << b << std::endl;
//     std::cout << "c is " << c << std::endl;
//     std::cout << "d is " << d << std::endl;

//     std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//     std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//     std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//     std::cout << "d is " << d.toInt() << " as integer" << std::endl;

//     return 0;
// }

int main(void)
{
    std::cout << "============================" << std::endl;
    std::cout << "1. DEFAULT CONSTRUCTOR TEST" << std::endl;
    std::cout << "Creating a default object a" << std::endl;
    Fixed a;
    std::cout << "a raw bits: " << a.getRawBits() << std::endl;
    std::cout << "a as float: " << a.toFloat() << std::endl;
    std::cout << "a as int: " << a.toInt() << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "2. INT CONSTRUCTOR TEST" << std::endl;
    std::cout << "Creating b from int 10" << std::endl;
    Fixed b(10);
    std::cout << "b raw bits: " << b.getRawBits() << std::endl;
    std::cout << "b as float: " << b.toFloat() << std::endl;
    std::cout << "b as int: " << b.toInt() << std::endl;
    std::cout << "Printing b with operator<<: " << b << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "3. FLOAT CONSTRUCTOR TEST" << std::endl;
    std::cout << "Creating c from float 42.42f" << std::endl;
    Fixed c(42.42f);
    std::cout << "c raw bits: " << c.getRawBits() << std::endl;
    std::cout << "c as float: " << c.toFloat() << std::endl;
    std::cout << "c as int: " << c.toInt() << std::endl;
    std::cout << "Printing c with operator<<: " << c << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "4. COPY CONSTRUCTOR TEST" << std::endl;
    std::cout << "Creating d as a copy of c" << std::endl;
    Fixed d(c);
    std::cout << "d raw bits: " << d.getRawBits() << std::endl;
    std::cout << "d as float: " << d.toFloat() << std::endl;
    std::cout << "d as int: " << d.toInt() << std::endl;
    std::cout << "Printing d with operator<<: " << d << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "5. COPY ASSIGNMENT TEST" << std::endl;
    std::cout << "Creating e with default constructor" << std::endl;
    Fixed e;
    std::cout << "Assigning e = b" << std::endl;
    e = b;
    std::cout << "e raw bits: " << e.getRawBits() << std::endl;
    std::cout << "e as float: " << e.toFloat() << std::endl;
    std::cout << "e as int: " << e.toInt() << std::endl;
    std::cout << "Printing e with operator<<: " << e << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "6. setRawBits TEST" << std::endl;
    std::cout << "Creating f with default constructor" << std::endl;
    Fixed f;
    std::cout << "Setting raw bits of f to 1234" << std::endl;
    f.setRawBits(1234);
    std::cout << "f raw bits: " << f.getRawBits() << std::endl;
    std::cout << "f as float: " << f.toFloat() << std::endl;
    std::cout << "f as int: " << f.toInt() << std::endl;
    std::cout << "Printing f with operator<<: " << f << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "7. ZERO TESTS" << std::endl;
    std::cout << "Creating g from int 0" << std::endl;
    Fixed g(0);
    std::cout << "g raw bits: " << g.getRawBits() << std::endl;
    std::cout << "g as float: " << g.toFloat() << std::endl;
    std::cout << "g as int: " << g.toInt() << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "8. SMALL FRACTION TESTS" << std::endl;
    std::cout << "Creating h from 0.5f" << std::endl;
    Fixed h(0.5f);
    std::cout << "h raw bits: " << h.getRawBits() << std::endl;
    std::cout << "h as float: " << h.toFloat() << std::endl;
    std::cout << "h as int: " << h.toInt() << std::endl;

    std::cout << "\nCreating i from 0.25f" << std::endl;
    Fixed i(0.25f);
    std::cout << "i raw bits: " << i.getRawBits() << std::endl;
    std::cout << "i as float: " << i.toFloat() << std::endl;
    std::cout << "i as int: " << i.toInt() << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "9. NEGATIVE NUMBER TESTS" << std::endl;
    std::cout << "Creating j from int -5" << std::endl;
    Fixed j(-5);
    std::cout << "j raw bits: " << j.getRawBits() << std::endl;
    std::cout << "j as float: " << j.toFloat() << std::endl;
    std::cout << "j as int: " << j.toInt() << std::endl;

    std::cout << "\nCreating k from float -2.75f" << std::endl;
    Fixed k(-2.75f);
    std::cout << "k raw bits: " << k.getRawBits() << std::endl;
    std::cout << "k as float: " << k.toFloat() << std::endl;
    std::cout << "k as int: " << k.toInt() << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "10. ROUNDING / PRECISION TEST" << std::endl;
    std::cout << "Creating l from 1.003f" << std::endl;
    Fixed l(1.003f);
    std::cout << "l raw bits: " << l.getRawBits() << std::endl;
    std::cout << "l as float: " << l.toFloat() << std::endl;
    std::cout << "l as int: " << l.toInt() << std::endl;

    std::cout << "\nCreating m from 1234.4321f" << std::endl;
    Fixed m(1234.4321f);
    std::cout << "m raw bits: " << m.getRawBits() << std::endl;
    std::cout << "m as float: " << m.toFloat() << std::endl;
    std::cout << "m as int: " << m.toInt() << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "11. SELF-ASSIGNMENT TEST" << std::endl;
    std::cout << "Doing self-assignment through a pointer" << std::endl;
    Fixed *ptr = &m;
    m = *ptr;
    std::cout << "m raw bits after self-assignment: " << m.getRawBits() << std::endl;
    std::cout << "m as float after self-assignment: " << m.toFloat() << std::endl;
    std::cout << "m as int after self-assignment: " << m.toInt() << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "12. SUBJECT STYLE TEST" << std::endl;
    Fixed aa;
    Fixed bb(10);
    Fixed cc(42.42f);
    Fixed dd(bb);

    aa = Fixed(1234.4321f);

    std::cout << "aa is " << aa << std::endl;
    std::cout << "bb is " << bb << std::endl;
    std::cout << "cc is " << cc << std::endl;
    std::cout << "dd is " << dd << std::endl;

    std::cout << "aa is " << aa.toInt() << " as integer" << std::endl;
    std::cout << "bb is " << bb.toInt() << " as integer" << std::endl;
    std::cout << "cc is " << cc.toInt() << " as integer" << std::endl;
    std::cout << "dd is " << dd.toInt() << " as integer" << std::endl;

    std::cout << "\n============================" << std::endl;
    std::cout << "END OF TESTS" << std::endl;

    return 0;
}