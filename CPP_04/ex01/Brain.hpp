#pragma once

#include <string>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &other);
    ~Brain();
};