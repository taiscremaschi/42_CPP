
#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <cctype> 
#include <limits.h>
#include <iomanip> 
#include "Contact.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      

class Phone_Book {
private:
    Contact contacts[8];
    int _index;
public:
    Phone_Book() : _index(0) {}
    void add_contact(const Contact &new_contact);
    int get_index();
    Contact getContact(int i);
};


bool is_not_number(std::string &str);
int ft_atoi(std::string s);


#endif