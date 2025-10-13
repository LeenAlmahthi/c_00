#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
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
	std::string	get_name();
};
Zombie* zombieHorde(int N, std::string name);
#endif