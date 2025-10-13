#include "Weapon.hpp"
std::string weapon::getType()
{
	return (this->type);
};
void	weapon::setType(std::string s)
{
	this->type = s;
};