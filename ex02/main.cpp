#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "Testing ClapTrap..." << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\nTesting ScavTrap..." << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("target2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\nTesting FragTrap..." << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("target3");
    frag.takeDamage(50);
    frag.beRepaired(25);
    frag.highFivesGuys();

    std::cout << "\nCopying FragTrap..." << std::endl;
    FragTrap fragCopy(frag);
    fragCopy.highFivesGuys();

    std::cout << "\nEnd of program. Destructors will now be called.\n" << std::endl;
    return 0;
}
