#include <iostream>
#include <string>

class Contact {
std::string contact_nbr;
std::string first_name;
std::string last_name;
std::string nickname;
std::string darkest_secret;
};

class Phone_Book {

int index;
Contact contacts[8];

};

int main()
{
    while(1)
    {

        std::string input;
        std::cout << "Enter the name: ";
        std::getline(std::cin, input);
        if(input == "ADD")
        {

        }
        if(input == "SEARCH")
        {

        }
        if(input == "EXIT")
            break ;
        std::cout << "Hello " << input << "!\n";
    }
    
        // se for add, abro a classe phone_book e comeco a escrever em cada lugar 
        // se for search eu so procuro e retorno o que achar sem o dark secret
        
    return 0;

}