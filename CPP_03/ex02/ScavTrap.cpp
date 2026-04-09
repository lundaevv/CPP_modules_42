#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "Default constructor: "
              << "ScavTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "Parameterized constructor: "
              << "ScavTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "Copy constructor: "
              << "ScavTrap " << "\"" << other._name << "\""
              << " > " << "Status: Cloned into a newly created ScavTrap"
              << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Assignation operator: "
              << "ScavTrap " << "\"" << other._name << "\""
              << " > " << "Status: Assigned to " << "ScavTrap "
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

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor: "
              << "ScavTrap " << "\"" << this->_name << "\""
              << " > " << "Status: Destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "** ScavTrap " << "\"" << this->_name << "\""
              << " activates to attack " << "\"" << target << "\""
              << " **" << std::endl;
    if (target.empty() || (target.find_first_not_of(" \t\n\r\f\v") == std::string::npos))
        std::cerr << "Error: target name cannot be empty or just whitespaces" << std::endl;
    else
    {
        if (this->_hitPoints == 0)
            std::cout << "ScavTrap " << "\"" << this->_name << "\""
                      << " can't attack: no hit points left =(" << std::endl;
        else if (this->_energyPoints == 0)
            std::cout << "ScavTrap " << "\"" << this->_name << "\""
                      << " can't attack: no energy points left =(" << std::endl;
        else
        {
            this->_energyPoints--;
            std::cout << "ScavTrap " << "\"" << this->_name << "\""
                      << " attacks " << target << " causing "
                      << "<" << this->_attackDamage << ">"
                      << " points of damage!" << std::endl;
            std::cout << "ScavTrap " << "\"" << this->_name << "\""
                      << " has " << "<" << this->_energyPoints << ">"
                      << " energy points left!" << std::endl;
        }
    }
    std::cout << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << "\"" << this->_name << "\""
              << " is now in Gate keeper mode" << std::endl;
}
