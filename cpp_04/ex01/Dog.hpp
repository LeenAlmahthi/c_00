#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    
    private:
        Brain *brain; 
    public :
        Dog();
        Dog(std::string type);
        Dog(Dog const &tmp);
        virtual ~Dog();
        Dog &operator=(const Dog &tmp);
        virtual void makeSound() const;
        std::string getType() const;
        std::string getideas(int i) const;
        void setIdea(int i,std::string name);

};
#endif