
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat tata("tata", 100);
        Form form1("my first house", 10, 5);
        std::cout << form1;
        std:: cout << tata;
        tata.signForm(form1);
        std::cout << "\n";
    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }

    try{

        Bureaucrat tatazinha("tatazinha", 10);
        Form form2("my first car", 10, 10);
        std::cout << form2;
        std:: cout << tatazinha;
        tatazinha.signForm(form2);
        std::cout << form2;
        std::cout << "\n";

    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }
    try{

        Bureaucrat tata("tata", 100);
        Form form3("myform", 10, 10);
        form3.beSigned(tata);
        std::cout << form3 << std::endl;
        std:: cout << tata << std::endl;
    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }


}