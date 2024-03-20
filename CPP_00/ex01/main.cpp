#include <iostream>
#include <string>


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"  

class Contact {
private:
    std::string _contact_nbr;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _darkest_secret;
public:
    Contact() {};
    Contact(std::string contact_nbr, std::string first_name, std::string last_name,
        std::string nickname, std::string darkest_secret);
    ~Contact() {};
};

class Phone_Book {
private:
    int index;
    Contact contacts[8];
public:
    Phone_Book() : index(0) {}
    void add_contact(const Contact &new_contact);

};

void Phone_Book::add_contact(const Contact &new_contact) 
{
    static int flag;

    if (index < 7) 
    {
        contacts[index] = new_contact;
        index++;
        std::cout << CYAN << "YES!! Contact added successfully!\n" << RESET;
    }
    else if( flag == 1 ) {
        index = 0;
        contacts[index] = new_contact;
        index++;
        std::cout << CYAN << "YES!! Contact added successfully!\n" << RESET;
    }
    else
        flag = 1;
}

void adc_infos(Phone_Book &phone_book) 
{
    std::string first_name, last_name, contact_nbr, nickname, darkest_secret;

    std::cout << MAGENTA << "Enter the first name: " << RESET;
    std::getline(std::cin, first_name);

    std::cout << MAGENTA << "Enter the last name: " << RESET;
    std::getline(std::cin, last_name);

    std::cout << MAGENTA << "Enter the contact number: " << RESET;
    std::getline(std::cin, contact_nbr);

    std::cout << MAGENTA << "Enter the nickname: " << RESET;
    std::getline(std::cin, nickname);

    std::cout << RED << "Enter the darkest secret: " << RESET;
    std::getline(std::cin, darkest_secret);

    Contact new_contact(contact_nbr, first_name, last_name, nickname, darkest_secret);
    phone_book.add_contact(new_contact);
}

int main()
{
    Phone_Book phone_book;
    while(1)
    {

        std::string input;
        std::cout << CYAN << "WELCOME TO THIS FANTASTIC TRIP!\n" << RESET;
        std::cout << BLUE << "Enter command ADD, SEARCH or EXIT: " << RESET;
        std::getline(std::cin, input);
        if(input == "ADD")
        {
           adc_infos(phone_book);
        }
        if(input == "SEARCH")
        {
            std::cout << "procurando";

        }
        if(input == "EXIT")
        {
            std::cout << CYAN << "Bye!! See you next time! :) " << RESET;
            break ;
        }
        else 
            std::cout <<  RED << "invalid command, try ADD, SEARCH or EXIT please!" << RESET;
    }
    
    // se for search eu so procuro e retorno o que achar sem o dark secret
        
    return 0;
}