#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Very Wrong Animal")
{
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
    std::cout << "WrongAnimal Parameterized Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) 
{
    std::cout << "WrongAnimal Copy Assignment Operator Called" << std::endl;

    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

const std::string &WrongAnimal::getType() const 
{
    return this->_type;
}

void WrongAnimal::setType(const std::string &type) 
{
    if (type.empty() || (type.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
    {
        std::cerr << "Error: name cannot be empty or just whitespaces" << std::endl;
        this->_type = "Wrong Alien";
    }
    else
        this->_type = type;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "Indistinct Very Wrong Animal Sound" << std::endl;
}