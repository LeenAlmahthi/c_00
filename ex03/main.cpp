#include "Weapon.hpp"
int main ()
{
	weapon we("leen");// = new Weapon("ggggg");
	// (void)we;
	std::string s = we.getType();
	std::cout << s << "\n";
	we.setType("test it");
	std::cout << we.getType() << "\n";
	// std::string str = "HI THIS IS BRAIN";
	// set
	// std::string	*PTR = &str;
	// std::string	&REF = str;

	// std::cout << "The memory address of the string variable :" << &str << "\n";
	// std::cout << "The memory address held by stringPTR :" << &PTR << "\n";
	// std::cout << "The memory address held by stringREF :" << &REF << "\n";

	// std::cout << "The value of the string variable: " << str << "\n";
	// std::cout << "The value pointed to by stringPTR: " << *PTR << "\n";
	// std::cout << "The value pointed to by stringPTR: " << REF << "\n";

	return (0);
}