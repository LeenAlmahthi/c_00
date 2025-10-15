#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
int main ()
{
	Weapon we("leen");
	std::cout << we.getType() << "\n";
	we.setType("test it");
	std::cout << we.getType() << "\n";
	HumanA A("bob",we);
	A.attack();
	HumanB B("jim");
	std::cout << B.getname() << "\n";
	B.set_Weapon(we);
	B.attack();
	we.setType("some other type of club");
	std::cout << we.getType() << "\n";
	B.attack();
	// Weapon club = Weapon("crude spiked club");
	// HumanA bob("Bob", club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();
	// Weapon club_2 = Weapon("crude spiked club");
	// HumanB jim("Jim");
	// jim.set_Weapon(club_2);
	// jim.attack();
	// club_2.setType("some other type of club");
	// jim.attack();
	return (0);
}