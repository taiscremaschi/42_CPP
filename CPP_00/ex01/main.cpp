#include <iostream>
#include <string>

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
        std::cout << "YES!! Contact added successfully!\n";
    }
    else if( flag == 1 ) {
        index = 0;
        contacts[index] = new_contact;
        index++;
        std::cout << "YES!! Contact added successfully!\n";
    }
    else
        flag = 1;
}

void adc_infos(Phone_Book &phone_book) 
{
    std::string first_name, last_name, contact_nbr, nickname, darkest_secret;

    std::cout << "Enter the first name: ";
    std::getline(std::cin, first_name);

    std::cout << "Enter the last name: ";
    std::getline(std::cin, last_name);

    std::cout << "Enter the contact number: ";
    std::getline(std::cin, contact_nbr);

    std::cout << "Enter the nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Enter the darkest secret: ";
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
        std::cout << "Enter command ADD or SEARCH OR EXIT: ";
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
            std::cout << "Bye!! See you next time! :) ";
            break ;
        }
        else 
            std::cout << "invalid command";


    }
    
    // se for search eu so procuro e retorno o que achar sem o dark secret
        
    return 0;
}