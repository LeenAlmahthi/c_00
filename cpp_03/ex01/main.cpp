#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Bob");
    ClapTrap b("Alice");

    a.attack("Alice");

    b.takeDamage(a.getAttackDamage());

    // Alice repairs herself
    b.beRepaired(5);

    // Bob attacks again
    a.attack("Alice");

    // Alice takes damage again
    b.takeDamage(a.getAttackDamage());

    // Print final states
    a.point_table();
    b.point_table();

    return 0;
}
