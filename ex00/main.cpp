#include "ClapTrap.hpp"

int main()
{
    std::cout << "Creating ClapTraps..." << std::endl;
    ClapTrap clap1;
    ClapTrap clap2("Clappy");
    ClapTrap clap3(clap2);
    std::cout << "\nStarting actions...\n" << std::endl;
    clap1.attack("Target1");
    clap2.attack("Target2");
    clap2.takeDamage(5);
    clap2.takeDamage(10); 
    clap2.beRepaired(8);
    clap2.beRepaired(15);
    for (int i = 0; i < 3; ++i)
    {
        clap1.attack("Dummy");
    }
    clap1.beRepaired(5);
    std::cout << "\nEnding program. Destructors will be called automatically.\n" << std::endl;
    return 0;
}
