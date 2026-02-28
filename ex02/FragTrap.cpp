#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    std::cout << "FragTrap default constructor called\n";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name constructor called\n";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called\n";
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests high fives!\n";
}
