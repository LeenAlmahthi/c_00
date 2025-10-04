#include "PhoneBook.hpp"
 
int PhoneBook::contact_index = 0; // define static member

    PhoneBook::PhoneBook (){
         PhoneBook::contact_index = 0;
          PhoneBook::type = "leeneoo";
    }
    PhoneBook::PhoneBook (std::string s){
        PhoneBook::contact_index = 0;
        PhoneBook::type = s;
    }
    int is_alpha(std::string str) {
    for (std::size_t i =0 ;i < str.length();i++)
    {
        if (!std::isalpha(str[i]))
            return 0;
    }
    return 1;
}

    void  PhoneBook::determent_type(std::string s){
        if (s == "ADD")
        {
            std::cout << s << std::endl;
            
            contact_index++;
        }
        else if (s == "search")
            std::cout << s << std::endl;
    }
    void    PhoneBook::ft_print (PhoneBook data)
    {
        std::cout << "index =" <<PhoneBook::contact_index  << "type =" << PhoneBook::type << std::endl;
        std::cout << "name =" << PhoneBook::Contact::get_name(data.contacts[0]) << std::endl;  
    }
void    PhoneBook::fill_data_named(PhoneBook& my_book)
{
    std::string name;
    // while (1)
    // {
        std::cout << "Enter First Name:"<< std::endl;
        std::getline(std::cin,name);
        if (!std::cin)
            exit(0);
        // if (is_alpha(name))
        //     break;
        // else 
        //      std::cout << "Enter Name with alpha char"<< std::endl;
    // }
    // my_book.fill_name();
     std::cout << name << std::endl;
     PhoneBook::Contact::fill_contact_data(my_book.contacts[0],name,0);
}
void PhoneBook::Contact::fill_contact_data(Contact& pre_contact,std::string data, int i)
{
    if (i == 0)
        pre_contact.first_name = data;
    if (i == 1)
        pre_contact.last_name = data;
    if (i == 2)
        pre_contact.nickname = data;
    if (i == 3)
        pre_contact.phone_number = data;
    else 
        pre_contact.darkestSecret = data;
}