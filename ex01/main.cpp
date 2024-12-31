#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Creating ClapTrap and ScavTrap instances...\n" << std::endl;

    // ClapTrap test
    ClapTrap clap("Clappy");
    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\nCreating ScavTrap...\n" << std::endl;

    // ScavTrap test
    ScavTrap scav("Scavvy");
    scav.attack("target2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\nCopying ScavTrap...\n" << std::endl;

    ScavTrap scavCopy(scav);
    scavCopy.guardGate();

    std::cout << "\nEnd of program. Destructors will now be called.\n" << std::endl;
    return 0;
}
