#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    brain =new Brain(type); 
    std::cout << "[Dog] Default constructor created\n";
}

Dog::Dog(std::string type){

    this->type = type;
    brain =new Brain(type); 
    std::cout << "[Dog] Parameters constructor created\n";
}
std::string Dog::getType() const{
    return (type);
}
Dog::Dog(Dog const &tmp) : Animal(tmp){
    *this = tmp; 
    std::cout << "[Dog] Copy constructor created\n";
}
void Dog::makeSound() const{
        std::cout << type << " [Dog] Make sound\n"; 
}
Dog::~Dog(){
    // delete brain;
     std::cout << "[Dog] deconstruct constructor\n";
}
Dog &Dog::operator=(const Dog &tmp){
  if (this != &tmp)
    {
        type = tmp.type;
        if (brain)
            delete brain;
        brain = new Brain(tmp.brain->getideas(0));
    }
    return(*this);
}
 std::string Dog::getideas(int i) const{
		return (brain->getideas(i));
	};
void Dog::setIdea(int i,std::string name){
	if (i < 0 || i > 100)
	{
		std::cout << "input index between the [0,99]\n";
		return;
	}
	brain->setIdea(i,name);
	};