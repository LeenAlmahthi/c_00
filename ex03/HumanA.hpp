#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA{
	private :
		std::string name;
		weapon *we;
	public:
		HumanA(){
			this->name = "";
			we = nullptr;
		}
		HumanA(std::string name, weapon we){
			this->name = name;
			this->we = &we;
		}
		std::string weapon::getType();
		void	weapon::setType(std::string s);
}
#endif