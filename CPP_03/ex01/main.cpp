#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "===== TESTS: ClapTrap =====" << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap Clap1(\"Karen\"); >" << std::endl;
    ClapTrap Clap1("Karen");
    std::cout << std::endl;

    std::cout << "< ClapTrap Clap2(Clap1); >" << std::endl;
    ClapTrap Clap2(Clap1);
    std::cout << std::endl;

    std::cout << "< ClapTrap Clap3; >" << std::endl;
    ClapTrap Clap3;
    std::cout << "< Clap3 = Clap1; >" << std::endl;
    Clap3 = Clap1;
    std::cout << std::endl;

    std::cout << "===== TESTS: ClapTrap Functions =====" << std::endl;
    Clap1.attack("Bandit");
    Clap1.takeDamage(3);
    Clap1.beRepaired(2);
    std::cout << std::endl;

    std::cout << "===== TESTS: ScavTrap =====" << std::endl;
    std::cout << std::endl;

    std::cout << "< ScavTrap Scav1; >" << std::endl;
    ScavTrap Scav1;
    std::cout << std::endl;

    std::cout << "< ScavTrap Scav2(\"Boris\"); >" << std::endl;
    ScavTrap Scav2("Boris");
    std::cout << std::endl;

    std::cout << "< ScavTrap Scav3(Scav2); >" << std::endl;
    ScavTrap Scav3(Scav2);
    std::cout << std::endl;

    std::cout << "< Scav1 = Scav2; >" << std::endl;
    Scav1 = Scav2;
    std::cout << std::endl;

    std::cout << "===== TESTS: ScavTrap Attack =====" << std::endl;
    Scav2.attack("Bandit");
    Scav2.attack("Raider");
    std::cout << std::endl;

    std::cout << "===== TESTS: ScavTrap Guard Gate =====" << std::endl;
    Scav2.guardGate();
    std::cout << std::endl;

    std::cout << "===== TESTS: ScavTrap Damage / Repair =====" << std::endl;
    Scav2.takeDamage(30);
    Scav2.beRepaired(15);
    Scav2.takeDamage(200);
    Scav2.attack("Enemy");
    Scav2.guardGate();
    std::cout << std::endl;
}
