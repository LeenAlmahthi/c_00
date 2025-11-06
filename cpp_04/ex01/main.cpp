#include "Cat.hpp"

int main()
{
    Dog basic("dddd");
    {
        basic.setIdea(0 , "sara");
        Dog tmp = basic;
        std::cout<<"tmp = " <<tmp.getideas(0) << "\n";
        tmp.setIdea(0,"wow");
        std::cout<<"tmp = " <<tmp.getideas(0)<< "\n";
        std::cout<<"basic = "<<basic.getideas(0) << "\n";
    }
    std::cout << "---------------------------------------------------\n";
    basic.setIdea(0 , "soso");
    std::cout<<basic.getideas(0) << "\n";
    return (0);
}