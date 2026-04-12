#include "Cat.hpp"

Cat::Cat() 
{
    this->_type = "Cat";
    this->_catBrain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const std::string &type)
{
    this->_type = type;
    this->_catBrain = new Brain();
    std::cout << "Cat Parameterized Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->_catBrain = new Brain(*copy._catBrain);
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
    std::cout << "Cat Copy Assignment Operator Called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        delete this->_catBrain;
        this->_catBrain = new Brain(*other._catBrain);
    }
    return *this;
}

Cat::~Cat() 
{
    delete this->_catBrain;
    std::cout << "Cat Virtual Destructor Called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Annoying Meow" << std::endl;
}

Brain *Cat::getBrain() const
{
    return(this->_catBrain);
}