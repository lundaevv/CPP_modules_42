#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const std::string &type);
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &other);

    ~WrongCat(); // no override!

    void makeSound() const; // no override!
};