#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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

    std::cout << "< ScavTrap Scav1(\"Boris\"); >" << std::endl;
    ScavTrap Scav1("Boris");
    std::cout << std::endl;

    std::cout << "< ScavTrap Scav2(Scav1); >" << std::endl;
    ScavTrap Scav2(Scav1);
    std::cout << std::endl;

    std::cout << "< ScavTrap Scav3; >" << std::endl;
    ScavTrap Scav3;
    std::cout << "< Scav3 = Scav1; >" << std::endl;
    Scav3 = Scav1;
    std::cout << std::endl;

    std::cout << "===== TESTS: ScavTrap Functions =====" << std::endl;
    Scav1.attack("Raider");
    Scav1.guardGate();
    Scav1.takeDamage(30);
    Scav1.beRepaired(15);
    std::cout << std::endl;

    std::cout << "===== TESTS: FragTrap =====" << std::endl;
    std::cout << std::endl;

    std::cout << "< FragTrap Frag1(\"Nina\"); >" << std::endl;
    FragTrap Frag1("Nina");
    std::cout << std::endl;

    std::cout << "< FragTrap Frag2(Frag1); >" << std::endl;
    FragTrap Frag2(Frag1);
    std::cout << std::endl;

    std::cout << "< FragTrap Frag3; >" << std::endl;
    FragTrap Frag3;
    std::cout << "< Frag3 = Frag1; >" << std::endl;
    Frag3 = Frag1;
    std::cout << std::endl;

    std::cout << "===== TESTS: FragTrap Functions =====" << std::endl;
    Frag1.attack("Psycho");
    Frag1.takeDamage(20);
    Frag1.beRepaired(10);
    Frag1.highFivesGuys();
    std::cout << std::endl;

    return 0;
}
