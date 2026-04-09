#include "ClapTrap.hpp"
#include <iostream>

/* ========================================================================== */

ClapTrap::ClapTrap()
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor: "
              << "ClapTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    if (name.empty() || (name.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
    {
        std::cerr << "Error: name cannot be empty or just whitespaces" << std::endl;
        this->_name = "Default";
    }

    std::cout << "Parameterized constructor: "
              << "ClapTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name),
      _hitPoints(other._hitPoints),
      _energyPoints(other._energyPoints),
      _attackDamage(other._attackDamage)
{
    std::cout << "Copy constructor: "
              << "ClapTrap " << "\"" << other._name << "\"" << " > "
              << "Status: Cloned into a newly created ClapTrap" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assignation operator: "
              << "ClapTrap " << "\"" << other._name << "\""
              << " > " << "Status: Assigned to " << "ClapTrap "
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

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor: "
              << "ClapTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Destroyed" << std::endl;
}

/* ========================================================================== */

const std::string &ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setName(const std::string &name)
{
    if (name.empty() || (name.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
    {
        std::cerr << "Error: name cannot be empty or just whitespaces" << std::endl;
        this->_name = "Default";
    }
    else
        this->_name = name;
}

/* ========================================================================== */

void ClapTrap::attack(const std::string &target)
{
    std::cout << "** ClapTrap " << "\"" << this->_name << "\""
              << " activates to attack " << "\"" << target << "\""
              << " **" << std::endl;
    if (target.empty() || (target.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
        std::cerr << "Error: target name cannot be empty or just whitespaces" << std::endl;
    else
    {
        if (this->_hitPoints <= 0)
            std::cout << "ClapTrap " << "\"" << this->_name << "\""
                      << " can't attack: " << "no hit points left =(" << std::endl;
        else if (this->_energyPoints <= 0)
            std::cout << "ClapTrap " << "\"" << this->_name << "\""
                      << " can't attack: " << "no energy points left =(" << std::endl;
        else
        {
            this->_energyPoints--;
            std::cout << "ClapTrap " << "\"" << this->_name << "\""
                      << " attacks " << target << " causing " << "<"
                      << this->_attackDamage << ">"
                      << " points of damage!" << std::endl;
            std::cout << "ClapTrap " << "\"" << this->_name << "\""
                      << " has " << "<" << this->_energyPoints << ">"
                      << " energy points left!" << std::endl;
        }
    }
    std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "** ClapTrap " << "\"" << this->_name << "\""
              << " is about to be attacked **" << std::endl;
    std::cout << "ClapTrap " << "\"" << this->_name << "\""
              << " has " << "<" << this->_hitPoints << ">"
              << " hit points" << std::endl;
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " is already dead" << std::endl;
    else if (this->_hitPoints <= amount)
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " takes " << "<" << amount << ">"
                  << " points of damage" << std::endl;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " has " << "<" << this->_hitPoints << ">"
                  << " hit points left!" << std::endl;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " died" << std::endl;
    }
    else
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " takes " << "<" << amount << ">"
                  << " points of damage" << std::endl;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " has " << "<" << this->_hitPoints << ">"
                  << " hit points left!" << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "** ClapTrap " << "\"" << this->_name << "\""
              << " wants to get repaired **" << std::endl;
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " is already dead" << std::endl;
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " can't be repaired: " << "no energy points left =(" << std::endl;
    else
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " repairs " << "<" << amount << ">" << " hit points" << std::endl;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " has " << "<" << this->_hitPoints << ">"
                  << " hit points left!" << std::endl;
        std::cout << "ClapTrap " << "\"" << this->_name << "\""
                  << " has " << "<" << this->_energyPoints << ">"
                  << " energy points left!" << std::endl;
    }
    std::cout << std::endl;
}
