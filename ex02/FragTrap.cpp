#include "FragTrap.hpp"
#include <iostream>


FragTrap::FragTrap() : ClapTrap("FragTrap_default") {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << name << " constructor called with parameter." << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap Copy constructor called." << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap Copy assignment operator called." << std::endl;
    return *this;
}


FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called." << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "FragTrap " << _name << " has not enough energy or is dead." << std::endl;
    }
}

void FragTrap::highFivesGuys() const {
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
