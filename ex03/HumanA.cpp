#include "Weapon.hpp"
#include "HumanA.hpp"

std::string	HumanA::getname()
{
	return (this->name); 
}
std::string	HumanA::getobj_type()
{
	return(this->we->getType());
}
void		HumanA::attack()
{
	std::cout << this->getname() << " attacks with their " << this->getobj_type() << "\n";
}