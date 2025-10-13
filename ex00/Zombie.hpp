#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
	private : 
	std::string  name;

	public:
	Zombie(std::string s) : name(s){
		std::cout<<  "Zombie "<< s << " created\n";
	};
	Zombie(){
		this->name = "";
	}
	~Zombie(){
		std::cout<<  "Zombie "<< this->name << " destroyed\n";
	}
	void	ft_print();	
	void	set_name(std::string name);
	void	destroy_object();
	std::string	get_name();
};
void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
#endif