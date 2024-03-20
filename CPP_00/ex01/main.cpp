#include <iostream>

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

int main(int ac, char **av)
{
    while(1)
    { 
        //quero entrar no meu programa e checar meu input, se for add search ou exit
        //ou entao quero entrar no programa como o minishell (acho que essa ideia eh mais bonita) mas só sei usar 
        //avv e ac entao nao sei como faria isso. 
        
        // se for add, abro a classe phone_book e comeco a escrever em cada lugar 
        // se for search eu so procuro e retorno o que achar sem o dark secret
        
        //if(av[1])

    }


}