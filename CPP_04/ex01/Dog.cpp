#include "Dog.hpp"

Dog::Dog() 
{
    this->_type = "Dog";
    this->_dogBrain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const std::string &type)
{
    this->_type = type;
    this->_dogBrain = new Brain();
    std::cout << "Dog Parameterized Constructor Called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->_dogBrain = new Brain(*copy._dogBrain);
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << "Dog Copy Assignment Operator Called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        delete this->_dogBrain;
        this->_dogBrain = new Brain(*other._dogBrain);
    }
    return *this;
}

Dog::~Dog() 
{
    delete this->_dogBrain;
    std::cout << "Dog Virtual Destructor Called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Pleasant Woof-Woof" << std::endl;
}

Brain *Dog::getBrain() const
{
    return(this->_dogBrain);
}