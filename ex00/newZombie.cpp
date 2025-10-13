#include "Zombie.hpp" 


Zombie*	newZombie(std::string name){
	
	Zombie *test = new Zombie();
	std::cout<<  "Zombie "<< name << " created\n";
	test->set_name(name);
	return (test);
}