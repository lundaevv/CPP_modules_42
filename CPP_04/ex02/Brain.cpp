#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain Copy Assignment Operator Called" << std::endl;

    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}
