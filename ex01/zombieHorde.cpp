#include "Zombie.hpp" 

Zombie* zombieHorde(int N, std::string name){
	
	Zombie *node;
	int	i;
	i = 0;
	node = new Zombie[N];
	while (i < N)
	{
		node[i].set_name(name);
		std::cout << "Zombie "<< node[i].get_name() << ": BraiiiiiiinnnzzzZ...\n";
		i++;
	}
	return (node);
}