#include "Dog.hpp"

Dog::Dog() 
{
    this->_type = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const std::string &type)
{
    this->_type = type;
    std::cout << "Dog Parameterized Constructor Called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->_type = copy._type;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << "Dog Copy Assignment Operator Called" << std::endl;

    if (this != &other)
        this->_type = other._type;
    return *this;
}

Dog::~Dog() 
{
    std::cout << "Dog Virtual Destructor Called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Pleasant Woof-Woof" << std::endl;
}