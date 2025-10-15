#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::set_Weapon(Weapon &we)
{
	this->we = &we;
}
std::string	HumanB::getname()
{
	return (this->name); 
}
std::string	HumanB::getobj_type()
{
	return(this->we->getType());
}
void	HumanB::attack()
{
	std::cout << this->getname() << " attacks with their " << this->getobj_type() << "\n";
}