#include "Animal.hpp"
Animal::Animal(){
    type = "Animal";
    std::cout << "\n[Animal] Default constructor created\n";
}
Animal::Animal(std::string type){
    (void)type;
    this->type = "Animal";
    std::cout << "[Animal] Parameters constructor created\n";
}
Animal::Animal(Animal const &tmp){
    *this = tmp; 
    std::cout << "[Animal] Copy constructor created\n";
}
Animal::~Animal(){
     std::cout << "[Animal] deconstruct constructor\n";
}
Animal &Animal::operator=(const Animal &tmp){
    
    if (this != &tmp)
    {
        type = tmp.type;
    }
    return(*this);
}
std::string Animal::getType() const{
    return (type);
}
void Animal::makeSound() const{
        std::cout << type << "[Animal]  don't Make sound\n";   
}