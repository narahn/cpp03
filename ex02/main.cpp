#include "FragTrap.hpp"

int main()
{
    FragTrap bot("Fraggy");

    bot.attack("Target");
    bot.takeDamage(50);
    bot.beRepaired(25);
    bot.highFivesGuys();

    return 0;
}
