#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Bob");
    ClapTrap b("Alice");

    a.attack("Alice");

    b.takeDamage(a.getAttackDamage());
    b.beRepaired(5);
    a.attack("Alice");
    b.takeDamage(a.getAttackDamage());
    a.point_table();
    b.point_table();

    return 0;
}
