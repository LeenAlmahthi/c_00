#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class weapon{
	private:
		std::string type;
	public:
		weapon(){
			this->type = "test";
		};
		weapon(std::string str){
			this->type = str;
		};
		~weapon(){

		};
		void	setType(std::string s);
		std::string getType();

};
#endif