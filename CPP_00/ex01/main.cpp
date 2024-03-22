#include <iostream>
#include <string>
#include <cctype> 
#include <limits.h>
#include <iomanip> 

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      

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
        std::string nickname, std::string darkest_secret)
        {
            _contact_nbr = contact_nbr;
            _first_name = first_name;
            _last_name = last_name;
            _nickname = nickname;
            _darkest_secret = darkest_secret;
        }
    std::string getFistName();
    std::string getLastName();
    std::string getNickname();

    ~Contact() {};
};

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

int     Phone_Book::get_index()
{
    return(_index);
}

void Phone_Book::add_contact(const Contact &new_contact) 
{

    contacts[_index % 8] = new_contact;
    _index++;
    std::cout << CYAN << "YES!! Contact added successfully!\n" << RESET;
}

Contact Phone_Book::getContact(int i)
{
    return (contacts[i]);
}

bool is_not_number(std::string &str)
{
    int i = 0;
    if(!str[i])
        return false;
    while(str[i])
    {
        if(!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}
void adc_infos(Phone_Book &phone_book) 
{
    std::string first_name, last_name, contact_nbr, nickname, darkest_secret;

    std::cout << MAGENTA << "Enter the first name: " << RESET;
    std::getline(std::cin, first_name);

    std::cout << MAGENTA << "Enter the last name: " << RESET;
    std::getline(std::cin, last_name);
    while(true)
    {
        std::cout << MAGENTA << "Enter the contact number: " << RESET;
        std::getline(std::cin, contact_nbr);
        if(is_not_number(contact_nbr) == true)
            break ;
        std::cout << RED << "Please, insert just numbers\n" << RESET;
    }
    std::cout << MAGENTA << "Enter the nickname: " << RESET;
    std::getline(std::cin, nickname);

    std::cout << RED << "Enter the darkest secret: " << RESET;
    std::getline(std::cin, darkest_secret);

    Contact new_contact(contact_nbr, first_name, last_name, nickname, darkest_secret);
    phone_book.add_contact(new_contact);
}

void trunc(Contact &contact, int size)
{

}

void search_contact (Contact &contacts, Phone_Book &phone_book)
{
    int i = 0; 
    int index = phone_book.get_index();

    std::cout << std::setw(10) << std::right << "Index" << " | "
          << std::setw(10) << std::right << "First Name" << " | "
          << std::setw(10) << std::right << "Last Name" << " | "
          << std::setw(10) << std::right << "Nickname" << std::endl;
    while(i <= index)
    {
        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).first_name(), 10) << " | ";
        std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).last_name(), 10) << " | ";
        std::cout << std::setw(10) << std::right << trunc(phone_book.getContact(i).nickname(), 10) << std::endl;
    }
        
}
void choise_contact(Phone_Book &phone_book)
{


}

int ft_atoi(std::string s)
{
    int result = 0;
    if(s[1])
        return -1;
    if(s[0] > '8')
        return -1;
   result =  result + s[0] - '0';
    return result;
}


int main()
{
    Phone_Book phone_book;
    Contact contacts;

    std::cout << CYAN << "WELCOME TO THIS FANTASTIC TRIP!\n" << RESET;
    while(1)
    {
        std::string input;
        std::cout << BLUE << "Enter command ADD, SEARCH or EXIT: " << RESET;
        std::getline(std::cin, input);

        if(input == "ADD")
        {
           adc_infos(phone_book);
        }
        else if(input == "SEARCH")
        {
            while(1)
            {
                search_contact(contacts, phone_book);
                std::cout << CYAN << "Choose the index you need or to return press '.': " << RESET;
                std::getline(std::cin, input);
                if(input == ".")
                {
                    break ;
                }
                if(ft_atoi(input) <= phone_book.get_index() && ft_atoi(input) > -1)
                {
                    choise_contact(phone_book);
                    continue ;
                }
                else 
                    std::cout <<  RED << "invalid index, try again!\n" << RESET;
            }
        }
        else if(input == "EXIT")
        {
            std::cout << CYAN << "Bye!! See you next time! :)\n " << RESET;
            break ;
        }
        else
        {
            std::cout <<  RED << "invalid command, try again!\n" << RESET;
        }
    }
    
    // se for search eu so procuro e retorno o que achar sem o dark secret e o numeor

        
    return 0;
}