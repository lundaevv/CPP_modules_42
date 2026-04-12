#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &other);

    ~WrongAnimal(); // not virtual! 

    const std::string &getType() const;
    void setType(const std::string &type);

    void makeSound() const; // not virtual!
};