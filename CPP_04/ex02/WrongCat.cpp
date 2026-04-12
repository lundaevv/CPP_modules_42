#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
    this->_type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const std::string &type)
{
    this->_type = type;
    std::cout << "WrongCat Parameterized Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    this->_type = copy._type;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) 
{
    std::cout << "WrongCat Copy Assignment Operator Called" << std::endl;

    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "Annoying Wrong Meow" << std::endl;
}