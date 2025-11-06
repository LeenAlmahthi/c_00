#include "Brain.hpp"
	Brain::Brain(){
		for (int i=0 ; i < 100 ; i++)
			ideas[i] = "Leen";
		std::cout << "[Brain] default constructor called\n"; 
	};
    Brain::~Brain(){
		std::cout << "\n[Brain] Deconstructor constructor called\n"; 
	};
    Brain::Brain(std::string type){
		
		for (int i=0 ; i < 100 ; i++)
			ideas[i] = type;
		std::cout << "[Brain] parameterized constructor called\n"; 
	};
    Brain::Brain(Brain const &tmp){
		*this = tmp;
		std::cout << "[Brain] Copy constructor called\n"; 
	};
    Brain &Brain::operator=(const Brain &tmp){
		if (this != &tmp)
		{
			for (int i=0 ; i < 100 ; i++)
				ideas[i] = tmp.ideas[i];
		}
		return(*this);
		std::cout << "[Brain] Copy assignment constructor called\n"; 
	};
    std::string Brain::getideas(int i) const{
		return (ideas[i]);
	};
	void Brain::setIdea(int i,std::string name){
		if (i < 0 || i > 100)
		{
			std::cout << "input index between the [0,99]\n";
			return;
		}
		this->ideas[i] = name;
	};

    // void ::setIdea(int index, const std::string& idea){

	// };