#include <iostream>
#include <string.h>
#include <cstdlib>

class Contact 
{
    private :
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string  darkestSecret;
    public:
    void    fill_contact_data(Contact& pre_contact, std::string data, int i);
    std::string     get_name(Contact cont);
};
class PhoneBook :public Contact{
    
    private :
    static int contact_index;
    std::string type;
    Contact contacts[8];
    public :
    PhoneBook();
    PhoneBook (std::string s);
    void    fill_data_named(PhoneBook& my_book);
    void    ft_print(PhoneBook data);
    void    fill_contact_data(Contact& pre_contact,std::string data, int i);
    void determent_type(std::string s);
};