#include "Cat.hpp"

Cat::Cat() 
{
    this->_type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const std::string &type)
{
    this->_type = type;
    std::cout << "Cat Parameterized Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    this->_type = copy._type;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
    std::cout << "Cat Copy Assignment Operator Called" << std::endl;

    if (this != &other)
        this->_type = other._type;
    return *this;
}

Cat::~Cat() 
{
    std::cout << "Cat Virtual Destructor Called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Annoying Meow" << std::endl;
}