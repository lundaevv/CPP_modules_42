#include "Zombie.hpp"

// stack object - automatic storage - destroyed automatically when scope ends
// destructor runs automatically when the function ends (object goes out of scope)
void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}