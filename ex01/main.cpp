#include "Zombie.hpp"

int main ()
{
	Zombie *test = zombieHorde(20, "leen || 55");
	// std::cout << test[0].get_name() << std::endl;
	delete []test;
	return (0);
}