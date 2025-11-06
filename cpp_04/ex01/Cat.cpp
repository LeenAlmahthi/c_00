#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    brain = new Brain(type);
    std::cout << "[cat] Default constructor created\n";
}
Cat::Cat(std::string type){
    this->type = type;
    brain = new Brain(type);
    std::cout << "[cat] Parameters constructor created\n";
}
std::string Cat::getType() const{
    return (type);
}
Cat::Cat(Cat const &tmp) :Animal(tmp){
    *this = tmp; 
    std::cout << "[cat] Copy constructor created\n";
}
void Cat::makeSound() const{
        std::cout << type << " [cat] Make sound\n"; 
}
Cat::~Cat(){
    delete brain; 
    std::cout << "[cat] deconstruct constructor\n";
}
Cat &Cat::operator=(const Cat &tmp){
    
    if (this != &tmp)
    {
        type = tmp.type;
        if (brain)
            delete brain;
        brain = new Brain(tmp.brain->getideas(0));
    }
    return(*this);
}
std::string Cat::getideas(int i) const{
		return (brain->getideas(i));
	};
void Cat::setIdea(int i,std::string name){
	if (i < 0 || i > 100)
	{
		std::cout << "input index between the [0,99]\n";
		return;
	}
	brain->setIdea(i,name);
	};