#include "Zombie.hpp" 

void Zombie::ft_print(){
	std::cout << this->name << " : BraiiiiiiinnnzzzZ...\n";
};
void	Zombie::set_name(std::string name)
{
	this->name = name;
}
std::string	Zombie::get_name(){
	return (this->name);
}
void	Zombie::destroy_object()
{
	delete this;
}


