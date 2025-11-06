#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
// we must Knows what maen a deep copy in this ex01
// Shallow copy:  this mean the 2 object are in the same memory this is bad   
// deep copy: this mean when i call a copy constructor we dont make the 2 obj in the same address in the  menery  we use a delete and new 
// const Animal* a = new Dog();   this calls a polymorphism
// delete a;                       
  
class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(std::string type);
    Brain(Brain const &tmp);
    Brain &operator=(const Brain &tmp);
    ~Brain();
    std::string getideas(int i) const;
    void setIdea(int i,std::string name);
    // void setidea(int index, const std::string& idea);
};

#endif
