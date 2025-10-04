#include "PhoneBook.hpp"
std::string Contact::get_name(Contact cont)
{
    return (cont.first_name);
}
// void Contact::fill_contact_data(Contact pre_contact,std::string data, int i)
// {
//     if (i == 0)
//         pre_contact.first_name = data;
//     if (i == 1)
//         pre_contact.last_name = data;
//     if (i == 2)
//         pre_contact.nickname = data;
//     if (i == 3)
//         pre_contact.phone_number = data;
//     else 
//         pre_contact.darkestSecret = data;
// }