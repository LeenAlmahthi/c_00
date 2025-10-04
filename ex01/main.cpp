#include "PhoneBook.hpp"

int skip_whitespace(std::string line, std::string s)
{
    std::size_t i;
    std::size_t j;

    i = 0;
    j = 0;
    while (line.length() > i && (line[i] == '\t' || line[i] == ' '))
        i++;
    while (line.length() > i)
    {
        if ( j == s.length() && (line[i] != ' ' && line[i] != '\t'))
            return (0);
        if (line[i] == s[j] && j < s.length())
            j++;
        i++;
    }
    if (j == s.length())
        return (1);
    return (0);
}

void    fill_data(PhoneBook& my_book)
{
    my_book.fill_data_named(my_book);
    // fill_data_last();
    // fill_data_num_phone();
    // fill_nice_name();
    // fill_darkest_secret();
    // PhoneBook::Contact::fill_contact_data(my_book.contacts[my_book.contact_index]);
}
int main ()
{
    std::string str;
    PhoneBook p_book("AAAA");
    while (1)
    {
        getline(std::cin,str);
        if (!std::cin)
            return (0);
        if (skip_whitespace(str,"ADD"))
        {
            p_book.determent_type("ADD");
            fill_data(p_book);
            p_book.ft_print(p_book);
            // std::cout << str << std::endl;
        }
        else if (skip_whitespace(str,"SEARCH"))
        {
            // std::cout << str << std::endl;
             p_book.ft_print(p_book);
        }
        else if (skip_whitespace(str,"EXIT"))
            return (0);        
    }
    return (0);
}