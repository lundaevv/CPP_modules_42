#include "Zombie.hpp"

int main(void) {
	const int zombieCount = 11;

	Zombie *horde = zombieHorde(zombieCount, "Walker");
	if (!horde)
		return 0;

	for (int i = 0; i < zombieCount; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
