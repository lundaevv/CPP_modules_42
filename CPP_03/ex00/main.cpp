#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << " ===== TESTS: Orthodox Canonical Class form =====" << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap1; >" << std::endl;
    ClapTrap ClapTrap1;
    std::cout << "ClapTrap1 name: " << ClapTrap1.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap2(\"Karen\"); >" << std::endl;
    ClapTrap ClapTrap2("Karen");
    std::cout << "ClapTrap2 name: " << ClapTrap2.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap3; >" << std::endl;
    ClapTrap ClapTrap3;
    std::cout << "ClapTrap3 name: " << ClapTrap3.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap4(\"Donald\"); >" << std::endl;
    ClapTrap ClapTrap4("Donald");
    std::cout << "ClapTrap4 name: " << ClapTrap4.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "ClapTrap3 name: " << ClapTrap3.getName() << std::endl;
    std::cout << "ClapTrap2 name: " << ClapTrap2.getName() << std::endl;
    std::cout << "< ClapTrap3 = ClapTrap2; >" << std::endl;
    ClapTrap3 = ClapTrap2;
    std::cout << "ClapTrap3 name: " << ClapTrap3.getName() << std::endl;
    std::cout << "ClapTrap2 name: " << ClapTrap2.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "ClapTrap3 name: " << ClapTrap3.getName() << std::endl;
    std::cout << "< ClapTrap ClapTrap5(ClapTrap3); >" << std::endl;
    ClapTrap ClapTrap5(ClapTrap3);
    std::cout << "ClapTrap5 name: " << ClapTrap5.getName() << std::endl;
    std::cout << "ClapTrap3 name: " << ClapTrap3.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap6(\"\"); >" << std::endl;
    ClapTrap ClapTrap6("");
    std::cout << "ClapTrap6 name: " << ClapTrap6.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap7(\"\t\"); >" << std::endl;
    ClapTrap ClapTrap7("\t");
    std::cout << "ClapTrap7 name: " << ClapTrap7.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "< ClapTrap ClapTrap8(\"Chikibomboney\"); >" << std::endl;
    ClapTrap ClapTrap8("Chikibomboney");
    std::cout << "ClapTrap8 name: " << ClapTrap8.getName() << std::endl;
    std::cout << std::endl;

    std::cout << "ClapTrap7 name: " << ClapTrap7.getName() << std::endl;
    std::cout << "ClapTrap8 name: " << ClapTrap8.getName() << std::endl;
    std::cout << "< ClapTrap7 = ClapTrap8; >" << std::endl;
    ClapTrap7 = ClapTrap8;
    std::cout << "ClapTrap7 name: " << ClapTrap7.getName() << std::endl;
    std::cout << "ClapTrap8 name: " << ClapTrap8.getName() << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;


    //**********************************************************/

    std::cout << std::endl;
    std::cout << "===== TESTS: ClapTrap Testing Functions =====" << std::endl;
    std::cout << std::endl;

    //attack
    std::cout << "===== TESTS: ATTACK! =====" << std::endl;

    ClapTrap5.attack("");
    ClapTrap5.attack("\t");
    ClapTrap5.attack("Karl");
    ClapTrap5.attack("Donatella");
    ClapTrap5.attack("Michael");
    ClapTrap5.attack("Carl");
    ClapTrap5.attack("Vladimir");
    ClapTrap5.attack("Axel");
    ClapTrap5.attack("Angela");
    ClapTrap5.attack("Valentina");
    ClapTrap5.attack("Leo");
    ClapTrap5.attack("Martin");
    ClapTrap5.attack("Monika");

    std::cout << std::endl;

    //takeDamage
    std::cout << "===== TESTS: TAKE DAMAGE! =====" << std::endl;

    ClapTrap4.takeDamage(5);
    ClapTrap4.beRepaired(5);
    ClapTrap4.takeDamage(5);
    ClapTrap4.takeDamage(5); // Dead
    ClapTrap4.takeDamage(5);
    ClapTrap4.attack("Monika"); //Dead

    std::cout << std::endl;

    //beRepaired
    std::cout << "===== TESTS: REPAIRS! =====" << std::endl;

    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5);
    ClapTrap8.beRepaired(5); // No energy points left
    ClapTrap8.attack("Rhayneirah"); 
    
    std::cout << std::endl;

}