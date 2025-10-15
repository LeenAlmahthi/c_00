#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(){
			this->type = "test";
		};
		Weapon(std::string str){
			this->type = str;
		};
		~Weapon(){

		};
		void	setType(std::string s);
		std::string getType();

};
#endif