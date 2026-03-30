#include "Zombie.hpp"

// heap object - dynamic storage - remains alive until delete()
// destructor runs when delete() is executed, then memory is released
Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}