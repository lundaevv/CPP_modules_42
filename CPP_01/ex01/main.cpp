#include "Zombie.hpp"

int main(void)
{
	const int zombieCount = 11;
	const std::string zombieName = "Walker";

	Zombie* horde = zombieHorde(zombieCount, zombieName);
	if (!horde)
		return 0;
	
	int i = 0;
	while (i < zombieCount)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return 0;
}
