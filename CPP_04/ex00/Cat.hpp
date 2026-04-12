#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const std::string &type);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &other);

    virtual ~Cat();

    void makeSound() const override;
};