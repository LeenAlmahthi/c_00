#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB{
	private :
		std::string name;
		Weapon *we;
	public:
		HumanB(){
			this->name = "";
			this->we = NULL;
		}
		HumanB(std::string name){
			this->name = name;
			this->we = NULL;
		}
		std::string	getname();
		std::string	getobj_type();
		void	set_Weapon(Weapon &we);
		void	attack();
};
#endif