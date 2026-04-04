#include "ClapTrap.hpp"
#include <iostream>

/* ========================================================================== */

ClapTrap::ClapTrap()
    : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    if (name.empty() || (name.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
    {
        std::cerr << "Error: name cannot be empty or just whitespaces" << std::endl;
        this->_name= "default";
    }
    else
        this->_name = name;
    
    std::cout << "ClapTrap " << this->_name << "> " << "Status: Created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap " << other._name << "> "
              << "Status: Cloned to " << "ClapTrap " << this->_name << std::endl;

    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

/* ========================================================================== */



void ClapTrap::attack(const std::string &target)
{
}
