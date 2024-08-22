
#include <string>
#include <iostream>
#include <cstdio>
#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat tata("tata", 100);
        Form FormHouse("my first house", 10, 5);
        std::cout << FormHouse;
        std:: cout << tata;
        tata.signForm(FormHouse);
        std::cout << "\n";
    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }

    try{

        Bureaucrat tatazinha("tatazinha", 10);
        Form formCar("my first car", 10, 10);
        std::cout << formCar;
        std:: cout << tatazinha;
        tatazinha.signForm(formCar);
        std::cout << formCar;
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
    try{

        Bureaucrat tata("tata", 180);
        Form form3("myform", 10, 10);
        form3.beSigned(tata);
        std::cout << form3 << std::endl;
        std:: cout << tata << std::endl;
    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }


}