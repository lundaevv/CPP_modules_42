#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "Default constructor: "
              << "FragTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Created" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "Parameterized constructor: "
              << "FragTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "Copy constructor: "
              << "FragTrap " << "\"" << other._name << "\""
              << " > " << "Status: Cloned into a newly created FragTrap"
              << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Assignation operator: "
              << "FragTrap " << "\"" << other._name << "\""
              << " > " << "Status: Assigned to " << "FragTrap "
              << "\"" << this->_name << "\"" << std::endl;

    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor: "
              << "FragTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << "\"" << this->_name << "\""
              << " requests a positive high five!" << std::endl;
}
