#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat :public Animal{
    private:
        Brain *brain;
    public :
        Cat();
        Cat(std::string type);
        Cat(Cat const &tmp);
        virtual ~Cat();
        Cat &operator=(const Cat &tmp);
        virtual void makeSound() const;
        std::string getType() const;
        std::string getideas(int i) const;
        void setIdea(int i,std::string name);
};
#endif