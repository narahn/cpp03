#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Atlas");
    ClapTrap b("Enemy");

    a.attack("Enemy");
    b.takeDamage(0);

    a.beRepaired(5);
    a.takeDamage(20);
    a.attack("Enemy");

    return 0;
}
