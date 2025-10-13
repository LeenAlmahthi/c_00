#include "Zombie.hpp"

void	 randomChump(std::string name)
{
	Zombie test(name);
	std::cout<< test.get_name() << ": BraiiiiiiinnnzzzZ...\n";
}