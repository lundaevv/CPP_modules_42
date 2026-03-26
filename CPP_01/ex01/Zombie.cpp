#include "Zombie.hpp"
#include <iostream>

static const char* const MESSAGE = ": BraiiiiiiinnnzzzZ...";

Zombie::Zombie()
{
}

void Zombie::setName( std::string name )
{
	_name = name;
}

void Zombie::announce( void )
{
	std::cout << _name << MESSAGE << std::endl;
}