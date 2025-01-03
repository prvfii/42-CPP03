#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created (with ClapTrap default constructor)." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed with parameter." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " copied." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack because it has no energy or hit points left." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    --_energyPoints;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}
