#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " created." << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
};

ClapTrap::ClapTrap(const std::string & _name) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " constructed with parameter." << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap & other)
{
	*this = other;
	std::cout << "ClapTrap " << _name << " copied." << std::endl;
};

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	if (this != & other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if(_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack because it's out of energy and/or hitpoints." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " and causes " << _attackDamage << " amount of damage." << std::endl;
    --_energyPoints;
};

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't take more damage, it's already down!" << std::endl;
		return;
    }
    _hitPoints -= (amount >_hitPoints) ? _hitPoints : amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair himself, it's out of energy or hit points." << std::endl;
		return;
	}
	_hitPoints += amount;
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " repairs itself, regaining " << amount << " hit points!" << std::endl;
};
