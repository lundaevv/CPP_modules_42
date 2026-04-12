#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_dogBrain;

public:
    Dog();
    Dog(const std::string &type);
    Dog(const Dog &copy);
    Dog &operator=(const Dog &other);

    ~Dog() override;

    void makeSound() const override;

    Brain *getBrain() const;
};