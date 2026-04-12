#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
    std::cout << "Animal Parameterized Constructor Called" << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
    std::cout << "Animal Copy Assignment Operator Called" << std::endl;

    if (this != &other)
        this->_type = other._type;
    return *this;
}

Animal::~Animal() 
{
    std::cout << "Animal Virtual Destructor Called" << std::endl;
}

const std::string &Animal::getType() const 
{
    return this->_type;
}

void Animal::setType(const std::string &type) 
{
    if (type.empty() || (type.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
    {
        std::cerr << "Error: name cannot be empty or just whitespaces" << std::endl;
        this->_type = "Animal";
    }
    else
        this->_type = type;
}

void Animal::makeSound() const 
{
    std::cout << "Animal Sound" << std::endl;
}