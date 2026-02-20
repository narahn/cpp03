#include "ScavTrap.hpp"

int main()
{
    ScavTrap bot("Guardian");

    bot.attack("Bandit");
    bot.takeDamage(40);
    bot.beRepaired(20);
    bot.guardGate();

    return 0;
}
