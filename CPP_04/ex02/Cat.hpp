#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_catBrain;

public:
    Cat();
    Cat(const std::string &type);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &other);

    ~Cat() override;

    void makeSound() const override;

    Brain *getBrain() const;
};